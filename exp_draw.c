/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exp_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:52:20 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 10:52:34 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ligne_mid_up(t_point *p)
{
	p->color = ft_color_ligne(p);
	p->a_x = p->gaudroite + p->zoom + (p->zoom * p->x)
	- (p->zoom / 2 * p->y);
	p->a_y = p->bas_haut + p->zoom + (p->zoom * p->y)
	- ((p->zoom / 2) * (p->tab[p->y][p->x] * p->z)) + ((p->zoom / 2) * p->x);
	p->b_x = p->gaudroite + p->zoom + (p->zoom * (p->x + 1))
	- (p->zoom / 2 * p->y);
	p->b_y = p->bas_haut + p->zoom + (p->zoom * p->y) - ((p->zoom / 2)
	* (p->tab[p->y][p->x + 1] * p->z)) + (p->zoom / 2) * (p->x + 1);
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	if (p->a_x <= p->b_x && p->a_y <= p->b_y)
		droite_bas(p);
	else if (p->a_x <= p->b_x && p->a_y >= p->b_y)
		droite_haut(p);
	else if (p->a_x >= p->b_x && p->a_y <= p->b_y)
		gauche_bas(p);
	else if (p->a_x >= p->b_x && p->a_y >= p->b_y)
		gauche_haut(p);
}

void	colonne_mid_up(t_point *p)
{
	p->color = ft_color_colonne(p);
	p->a_x = p->gaudroite + p->zoom + (p->zoom * p->x)
	- (p->zoom / 2 * p->y);
	p->a_y = p->bas_haut + p->zoom + (p->zoom * p->y)
	- ((p->zoom / 2) * (p->tab[p->y][p->x] * p->z)) + ((p->zoom / 2) * p->x);
	p->b_x = p->gaudroite + p->zoom + (p->zoom * p->x)
	- (p->zoom / 2 * (p->y + 1));
	p->b_y = p->bas_haut + p->zoom + (p->zoom * (p->y + 1))
	- ((p->zoom / 2) * (p->tab[p->y + 1][p->x] * p->z)) + (p->zoom / 2) * p->x;
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	if (p->a_x <= p->b_x && p->a_y <= p->b_y)
		droite_bas(p);
	if (p->a_x <= p->b_x && p->a_y >= p->b_y)
		droite_haut(p);
	if (p->a_x >= p->b_x && p->a_y <= p->b_y)
		gauche_bas(p);
	if (p->a_x >= p->b_x && p->a_y >= p->b_y)
		gauche_haut(p);
}

void	draw_line(t_point *p)
{
	p->x = 0;
	p->y = 0;
	while (p->y < p->i)
	{
		while (p->x < p->k - 1)
		{
			ligne_mid_up(p);
			p->x++;
		}
		p->x = 0;
		p->y++;
	}
}

void	draw_colonne(t_point *p)
{
	p->x = 0;
	p->y = 0;
	while (p->x < p->k)
	{
		while (p->y < p->i - 1)
		{
			colonne_mid_up(p);
			p->y++;
		}
		p->y = 0;
		p->x++;
	}
}
