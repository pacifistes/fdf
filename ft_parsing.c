/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:01:31 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/14 15:01:33 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		*ft_parsing(char *str, int ac)
{
	int			*tab;
	int			i;
	static int	j;
	char		**char_to_int;

	(void)ac;
	tab = (int *)malloc(sizeof(int) * (int)ft_get_number_of_words(str, ' '));
	char_to_int = ft_strsplit(str, ' ');
	j = 0;
	i = 0;
	while (char_to_int[i])
	{
		tab[i] = ft_atoi(char_to_int[i]);
		i++;
	}
	return (tab);
}
