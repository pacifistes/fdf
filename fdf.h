/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 10:31:40 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/22 12:58:29 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <fcntl.h>
# define LARGEUR 1600
# define HAUTEUR 600

typedef struct		s_point
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	int		a_x;
	int		a_y;
	int		b_x;
	int		b_y;
	int		pixel_x;
	int		pixel_y;
	int		**tab;
	int		*col;
	int		lig;
	int		dx;
	int		dy;
	int		dp;
	int		morex;
	int		morexy;
	int		color;
	int		gaudroite;
	int		bas_haut;
	int		zoom;
	int		color1;
	int		color2;
	int		color3;
	int		ret;
	char	**s1;
	int		i;
	int		j;
	int		a;
	int		b;
	int		k;
	float	z;
	char	*line;
	int		fd;
	int		bpp;
	char	*data;
	void	*img;
	int		size_l;
	int		endian;
}					t_point;

void				img_pixel_put(t_point *img, int x, int y, size_t color);
void				draw_colonne(t_point *p);
void				ft_init_m_p(t_point *p);
int					*ft_parsing(char *str, int ac);
size_t				ft_get_number_of_words(char const *s, char c);
void				mouse_1(int button, int x, int y, t_point *p);
void				mouse_2(int button, int x, int y, t_point *p);
void				mouse_3(int button, int x, int y, t_point *p);
void				mouse_4(int button, int x, int y, t_point *p);
void				mouse_5(int button, int x, int y, t_point *p);
void				mouse_6(int button, int x, int y, t_point *p);
void				cas1_a(t_point *p);
void				cas1_b(t_point *p);
void				cas2_a(t_point *p);
void				cas2_b(t_point *p);
void				draw_line(t_point *p);
void				draw_palette(t_point *p);
void				draw_palette_1(t_point *p, int x, int y);
void				draw_palette_2(t_point *p, int x, int y);
void				draw_palette_3(t_point *p, int x, int y);
void				draw_palette_4(t_point *p, int x, int y);
void				draw_palette_5(t_point *p, int x, int y);
int					ft_color_ligne(t_point *p);
int					ft_color_colonne(t_point *p);
void				droite_bas(t_point *p);
void				droite_haut(t_point *p);
void				gauche_bas(t_point *p);
void				gauche_haut(t_point *p);

#endif
