/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresen_possibility.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:40:39 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 10:40:45 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	cas1_a(t_point *p)
{
	p->dp = (2 * p->dy) - p->dx;
	p->morex = 2 * p->dy;
	p->morexy = 2 * (p->dy - p->dx);
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	while (p->pixel_x != p->b_x || p->pixel_y != p->b_y)
	{
		if (p->dp <= 0)
		{
			p->dp = p->dp + p->morex;
			p->pixel_x--;
		}
		else
		{
			p->dp = p->dp + p->morexy;
			p->pixel_x--;
			p->pixel_y++;
		}
		img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	}
}

void	cas1_b(t_point *p)
{
	p->dp = (2 * p->dx) - p->dy;
	p->morex = 2 * p->dx;
	p->morexy = 2 * (p->dx - p->dy);
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	while (p->pixel_x != p->b_x || p->pixel_y != p->b_y)
	{
		if (p->dp <= 0)
		{
			p->dp = p->dp + p->morex;
			p->pixel_y++;
		}
		else
		{
			p->dp = p->dp + p->morexy;
			p->pixel_x--;
			p->pixel_y++;
		}
		img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	}
}

void	cas2_a(t_point *p)
{
	p->dp = 2 * p->dy - p->dx;
	p->morex = 2 * p->dy;
	p->morexy = 2 * (p->dy - p->dx);
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	while (p->pixel_x != p->b_x || p->pixel_y != p->b_y)
	{
		if (p->dp <= 0)
		{
			p->dp = p->dp + p->morex;
			p->pixel_x++;
		}
		else
		{
			p->dp = p->dp + p->morexy;
			p->pixel_x++;
			p->pixel_y++;
		}
		img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	}
}

void	cas2_b(t_point *p)
{
	p->dp = 2 * p->dx - p->dy;
	p->morex = 2 * p->dx;
	p->morexy = 2 * (p->dx - p->dy);
	p->pixel_x = p->a_x;
	p->pixel_y = p->a_y;
	img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	while (p->pixel_x != p->b_x || p->pixel_y != p->b_y)
	{
		if (p->dp <= 0)
		{
			p->dp = p->dp + p->morex;
			p->pixel_y++;
		}
		else
		{
			p->dp = p->dp + p->morexy;
			p->pixel_x++;
			p->pixel_y++;
		}
		img_pixel_put(p, p->pixel_x, p->pixel_y, p->color);
	}
}
