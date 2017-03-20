/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_palette.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:57:24 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 10:58:03 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	draw_palette_6(t_point *p, int x, int y)
{
	x = LARGEUR - 295;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 260)
		{
			img_pixel_put(p, x, y, 0x00FFFF);
			x++;
		}
		x = LARGEUR - 295;
		y++;
	}
	x = LARGEUR - 250;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 215)
		{
			img_pixel_put(p, x, y, 0x007FFF);
			x++;
		}
		x = LARGEUR - 250;
		y++;
	}
}

static void	draw_palette_7(t_point *p, int x, int y)
{
	x = LARGEUR - 205;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 170)
		{
			img_pixel_put(p, x, y, 0x0000FF);
			x++;
		}
		x = LARGEUR - 205;
		y++;
	}
	x = LARGEUR - 160;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 125)
		{
			img_pixel_put(p, x, y, 0x7F00FF);
			x++;
		}
		x = LARGEUR - 160;
		y++;
	}
}

static void	draw_palette_8(t_point *p, int x, int y)
{
	x = LARGEUR - 115;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 80)
		{
			img_pixel_put(p, x, y, 0xFF00FF);
			x++;
		}
		x = LARGEUR - 115;
		y++;
	}
	x = LARGEUR - 70;
	y = 35;
	while (y < 70)
	{
		while (x < LARGEUR - 35)
		{
			img_pixel_put(p, x, y, 0xFF007F);
			x++;
		}
		x = LARGEUR - 70;
		y++;
	}
}

void		draw_palette(t_point *p)
{
	int x;
	int y;

	x = LARGEUR - 330;
	y = 0;
	draw_palette_1(p, x, y);
	draw_palette_2(p, x, y);
	draw_palette_3(p, x, y);
	draw_palette_4(p, x, y);
	draw_palette_5(p, x, y);
	draw_palette_6(p, x, y);
	draw_palette_7(p, x, y);
	draw_palette_8(p, x, y);
}
