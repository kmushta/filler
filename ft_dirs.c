/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:53:39 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:53:41 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kmushta.filler.h"
#include "libftprintf.h"

int		go_ul(t_map *put, t_map *piece)
{
	int		i;
	int		j;

	i = 0;
	while (i < (int)put->h)
	{
		j = 0;
		while (j < (int)put->w)
		{
			if (map_get(put, i, j) == '*')
			{
				ft_printf("%d %d\n", i - piece->h + 1, j - piece->w + 1);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		go_ur(t_map *put, t_map *piece)
{
	int		i;
	int		j;

	i = 0;
	while (i < (int)put->h)
	{
		j = put->w - 1;
		while (j > -1)
		{
			if (map_get(put, i, j) == '*')
			{
				ft_printf("%d %d\n", i - piece->h + 1, j - piece->w + 1);
				return (1);
			}
			j--;
		}
		i++;
	}
	return (0);
}

int		go_dl(t_map *put, t_map *piece)
{
	int		i;
	int		j;

	i = put->h - 1;
	while (i > -1)
	{
		j = 0;
		while (j < (int)put->w)
		{
			if (map_get(put, i, j) == '*')
			{
				ft_printf("%d %d\n", i - piece->h + 1, j - piece->w + 1);
				return (1);
			}
			j++;
		}
		i--;
	}
	return (0);
}

int		go_dr(t_map *put, t_map *piece)
{
	int		i;
	int		j;

	i = put->h - 1;
	while (i > -1)
	{
		j = put->w - 1;
		while (j > -1)
		{
			if (map_get(put, i, j) == '*')
			{
				ft_printf("%d %d\n", i - piece->h + 1, j - piece->w + 1);
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}
