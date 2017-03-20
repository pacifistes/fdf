/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_palette_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:55:06 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 11:55:12 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_palette_1(t_point *p, int x, int y)
{
	while (y <= 150)
	{
		img_pixel_put(p, x, y, 0xFFFFFF);
		y++;
	}
	y--;
	while (x <= LARGEUR)
	{
		img_pixel_put(p, x, y, 0xFFFFFF);
		x++;
	}
	x = LARGEUR - 329;
	y = 0;
	while (y < 150)
	{
		while (x <= LARGEUR)
		{
			img_pixel_put(p, x, y, 0x000000);
			x++;
		}
		x = LARGEUR - 329;
		y++;
	}
}

void	draw_palette_2(t_point *p, int x, int y)
{
	x = LARGEUR - 295;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 260)
		{
			img_pixel_put(p, x, y, 0xFF0000);
			x++;
		}
		x = LARGEUR - 295;
		y++;
	}
	x = LARGEUR - 250;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 215)
		{
			img_pixel_put(p, x, y, 0xFF7F00);
			x++;
		}
		x = LARGEUR - 250;
		y++;
	}
}

void	draw_palette_3(t_point *p, int x, int y)
{
	x = LARGEUR - 205;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 170)
		{
			img_pixel_put(p, x, y, 0xFFFF00);
			x++;
		}
		x = LARGEUR - 205;
		y++;
	}
	x = LARGEUR - 160;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 125)
		{
			img_pixel_put(p, x, y, 0x7FFF00);
			x++;
		}
		x = LARGEUR - 160;
		y++;
	}
}

void	draw_palette_4(t_point *p, int x, int y)
{
	x = LARGEUR - 115;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 80)
		{
			img_pixel_put(p, x, y, 0x00FF00);
			x++;
		}
		x = LARGEUR - 115;
		y++;
	}
	x = LARGEUR - 70;
	y = 80;
	while (y < 115)
	{
		while (x < LARGEUR - 35)
		{
			img_pixel_put(p, x, y, 0x00FF7F);
			x++;
		}
		x = LARGEUR - 70;
		y++;
	}
}

void	draw_palette_5(t_point *p, int x, int y)
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
