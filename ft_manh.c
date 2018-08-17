/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:50:04 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:50:05 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kmushta.filler.h"

int		man_full(t_map *map)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < map->h)
	{
		j = 0;
		while (j < map->w)
		{
			if (!map_get(map, i, j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		min_it(t_map *manh, int i, int j)
{
	int		min;

	min = 2147483647;
	if (i > 0 && map_get(manh, i - 1, j) && map_get(manh, i - 1, j) < min)
		min = map_get(manh, i - 1, j);
	if (j > 0 && map_get(manh, i, j - 1) && map_get(manh, i, j - 1) < min)
		min = map_get(manh, i, j - 1);
	if (i + 1 < (int)manh->h && map_get(manh, i + 1, j) &&
		map_get(manh, i + 1, j) < min)
		min = map_get(manh, i + 1, j);
	if (j + 1 < (int)manh->w && map_get(manh, i, j + 1) &&
		map_get(manh, i, j + 1) < min)
		min = map_get(manh, i, j + 1);
	return (min);
}

void	next_it(t_map *manh, t_map *map)
{
	unsigned int	i;
	unsigned int	j;
	int				min;

	i = -1;
	while (++i < map->h && ((j = -1) + 2))
		while (++j < map->w)
			if (!map_get(manh, i, j))
			{
				if ((g_p == '1' && (map_get(map, i, j) == 'X' || map_get(map, i,
					j) == 'x')) || (g_p == '2' && (map_get(map, i, j) == 'O' ||
					map_get(map, i, j) == 'o')))
				{
					map_set(manh, i, j, 1);
					continue ;
				}
				min = min_it(manh, i, j);
				if (min < 2147483647)
					map_set(manh, i, j, min + 1);
			}
}

t_map	*get_man(t_map *map)
{
	t_map	*new;

	if (!(new = new_map(map->h, map->w)))
		return (0);
	while (!man_full(new))
		next_it(new, map);
	return (new);
}

int		get_sum(t_map *map, t_map *piece, unsigned int h, unsigned int w)
{
	unsigned int	i;
	unsigned int	j;
	int				q;

	q = 2147483647;
	i = 0;
	while (i < piece->h)
	{
		j = 0;
		while (j < piece->w)
		{
			if (map_get(piece, i, j) == '*')
				if (map_get(map, h + i, w + j) < q)
					q = map_get(map, h + i, w + j);
			j++;
		}
		i++;
	}
	return (q);
}
