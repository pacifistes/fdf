/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:06:20 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 12:08:42 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	mouse_1(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 295 && x < LARGEUR - 260 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0x00FFFF;
		if (button == 2)
			p->color2 = 0x00FFFF;
		if (button == 3)
			p->color3 = 0x00FFFF;
	}
	if (x > LARGEUR - 250 && x < LARGEUR - 215 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0x007FFF;
		if (button == 2)
			p->color2 = 0x007FFF;
		if (button == 3)
			p->color3 = 0x007FFF;
	}
}

void	mouse_2(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 205 && x < LARGEUR - 170 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0x0000FF;
		if (button == 2)
			p->color2 = 0x0000FF;
		if (button == 3)
			p->color3 = 0x0000FF;
	}
	if (x > LARGEUR - 160 && x < LARGEUR - 125 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0x7F00FF;
		if (button == 2)
			p->color2 = 0x7F00FF;
		if (button == 3)
			p->color3 = 0x7F00FF;
	}
}

void	mouse_3(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 115 && x < LARGEUR - 80 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0xFF00FF;
		if (button == 2)
			p->color2 = 0xFF00FF;
		if (button == 3)
			p->color3 = 0xFF00FF;
	}
	if (x > LARGEUR - 70 && x < LARGEUR - 35 && y > 35 && y < 70)
	{
		if (button == 1)
			p->color1 = 0xFF007F;
		if (button == 2)
			p->color2 = 0xFF007F;
		if (button == 3)
			p->color3 = 0xFF007F;
	}
}

void	mouse_4(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 295 && x < LARGEUR - 260 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0xFF0000;
		if (button == 2)
			p->color2 = 0xFF0000;
		if (button == 3)
			p->color3 = 0xFF0000;
	}
	if (x > LARGEUR - 250 && x < LARGEUR - 215 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0xFF7F00;
		if (button == 2)
			p->color2 = 0xFF7F00;
		if (button == 3)
			p->color3 = 0xFF7F00;
	}
}
