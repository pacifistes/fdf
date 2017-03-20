/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:00:00 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/22 13:01:33 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		expose_hook(t_point *p)
{
	if (p->img)
		mlx_destroy_image(p->mlx, p->img);
	p->img = mlx_new_image(p->mlx, LARGEUR, HAUTEUR);
	p->data = mlx_get_data_addr(p->img, &(p->bpp), &p->size_l, &p->endian);
	draw_line(p);
	draw_colonne(p);
	draw_palette(p);
	mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
	return (0);
}

int		key_hook(int keycode, t_point *p)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 123)
		p->gaudroite = p->gaudroite - 50;
	else if (keycode == 124)
		p->gaudroite = p->gaudroite + 50;
	else if (keycode == 125)
		p->bas_haut = p->bas_haut + 50;
	else if (keycode == 126)
		p->bas_haut = p->bas_haut - 50;
	else if (keycode == 69)
		p->zoom = (p->zoom < 5) ? 5 : p->zoom + 5;
	else if (keycode == 78)
	{
		if (p->zoom >= 5)
			p->zoom = (p->zoom == 5) ? 2 : p->zoom - 5;
	}
	else if (keycode == 116 || keycode == 121)
		p->z = (keycode == 116) ? p->z + 0.1 : p->z - 0.1;
	else if (keycode == 49)
		ft_init_m_p(p);
	expose_hook(p);
	return (0);
}

int		mouse_hook(int button, int x, int y, t_point *p)
{
	mouse_1(button, x, y, p);
	mouse_2(button, x, y, p);
	mouse_3(button, x, y, p);
	mouse_4(button, x, y, p);
	mouse_5(button, x, y, p);
	mouse_6(button, x, y, p);
	expose_hook(p);
	return (0);
}

void	ft_main(t_point *p, char **av)
{
	ft_init_m_p(p);
	p->mlx = mlx_init();
	p->win = mlx_new_window(p->mlx, LARGEUR, HAUTEUR, av[1]);
	mlx_key_hook(p->win, key_hook, p);
	mlx_mouse_hook(p->win, mouse_hook, p);
	mlx_expose_hook(p->win, expose_hook, p);
	mlx_loop(p->mlx);
}

int		main(int ac, char **av)
{
	t_point p;

	if (ac == 2 && (ft_strcmp("./fdf", av[0]) == 0))
	{
		p.fd = open(av[1], O_RDONLY);
		p.i = 0;
		if ((get_next_line(p.fd, &p.line)) < 1)
			return (0);
		while ((get_next_line(p.fd, &p.line)) > 0)
			p.i++;
		p.i++;
		p.tab = (int **)malloc(sizeof(int *) * p.i);
		p.i = 0;
		close(p.fd);
		p.fd = open(av[1], O_RDONLY);
		while ((get_next_line(p.fd, &p.line)) > 0)
		{
			p.tab[p.i] = ft_parsing(p.line, ac);
			p.k = (int)ft_get_number_of_words(p.line, ' ');
			p.i++;
		}
		ft_main(&p, av);
	}
	return (0);
}
