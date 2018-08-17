/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:52:11 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:52:12 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kmushta.filler.h"

void	init_sp(t_map *map)
{
	int		i;
	int		j;

	i = 0;
	while (i < (int)map->h)
	{
		j = 0;
		while (j < (int)map->w)
		{
			if ((map_get(map, i, j) == 'O' && g_p == '1') ||
				(map_get(map, i, j) == 'X' && g_p == '2'))
			{
				*g_sp = i;
				*(g_sp + 1) = j;
			}
			j++;
		}
		i++;
	}
}

void	make_resp(t_map *map, int *tab, int i)
{
	if (((map_get(map, 0, i) == 'O' || map_get(map, 0, i) == 'o') && g_p == '1')
		|| ((map_get(map, 0, i) == 'X' || map_get(map, 0, i) == 'x') && g_p ==
			'2'))
		tab[0] = 1;
	if (((map_get(map, map->h - 1, i) == 'O' || map_get(map, map->h - 1, i) ==
		'o') && g_p == '1') || ((map_get(map, map->h - 1, i) == 'X' || map_get(
			map, map->h - 1, i) == 'x') && g_p == '2'))
		tab[1] = 1;
	if (((map_get(map, i, 0) == 'O' || map_get(map, i, 0) == 'o') && g_p == '1')
		|| ((map_get(map, i, 0) == 'X' || map_get(map, i, 0) == 'x') && g_p ==
			'2'))
		tab[2] = 1;
	if (((map_get(map, i, map->w - 1) == 'O' || map_get(map, i, map->w - 1) ==
		'o') && g_p == '1') || ((map_get(map, i, map->w - 1) == 'X' || map_get(
			map, i, map->w - 1) == 'x') && g_p == '2'))
		tab[3] = 1;
}

void	re_sp(t_map *map)
{
	int		i;
	int		tab[4];

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	i = -1;
	while (++i < (int)map->w)
		make_resp(map, tab, i);
	if ((tab[0] && tab[1]) || (tab[2] && tab[3]))
		g_sp[2] = 1;
	if (tab[0])
		g_sp[0] = 0;
	if (tab[1])
		g_sp[0] = map->h - 1;
	if (tab[2])
		g_sp[1] = 0;
	if (tab[3])
		g_sp[1] = map->w - 1;
}
