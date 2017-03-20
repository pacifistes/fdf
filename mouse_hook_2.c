/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:19:46 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 12:19:56 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	mouse_5(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 205 && x < LARGEUR - 170 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0xFFFF00;
		if (button == 2)
			p->color2 = 0xFFFF00;
		if (button == 3)
			p->color3 = 0xFFFF00;
	}
	if (x > LARGEUR - 160 && x < LARGEUR - 125 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0x7FFF00;
		if (button == 2)
			p->color2 = 0x7FFF00;
		if (button == 3)
			p->color3 = 0x7FFF00;
	}
}

void	mouse_6(int button, int x, int y, t_point *p)
{
	if (x > LARGEUR - 115 && x < LARGEUR - 80 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0x00FF00;
		if (button == 2)
			p->color2 = 0x00FF00;
		if (button == 3)
			p->color3 = 0x00FF00;
	}
	if (x > LARGEUR - 70 && x < LARGEUR - 35 && y > 80 && y < 115)
	{
		if (button == 1)
			p->color1 = 0x00FF7F;
		if (button == 2)
			p->color2 = 0x00FF7F;
		if (button == 3)
			p->color3 = 0x00FF7F;
	}
}
