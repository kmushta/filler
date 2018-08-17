/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:47:42 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:47:45 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "kmushta.filler.h"

void	del_map(t_map **map)
{
	t_map	*e;

	if (map && *map)
	{
		e = *map;
		if (e->w * e->h)
			free(e->data);
		free(e);
	}
}

t_map	*new_map(unsigned int height, unsigned int width)
{
	t_map			*map;
	unsigned int	i;
	unsigned int	size;

	if (!(size = width * height))
		return (0);
	if (!(map = (t_map *)malloc(sizeof(t_map))))
		return (0);
	if (!(map->data = (int *)malloc(sizeof(int) * size)))
	{
		free(map);
		return (0);
	}
	map->w = width;
	map->h = height;
	i = 0;
	while (i < size)
		*(map->data + i++) = 0;
	return (map);
}

int		map_line(t_map *map, const char *s)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(map->data + i))
		i++;
	j = -1;
	while (*(s + ++j))
		*(map->data + i + j) = *(s + j);
	return (1);
}

char	map_get(t_map *map, unsigned int h, unsigned int w)
{
	if (h >= map->h || w >= map->w)
		return (0);
	return (*(map->data + h * map->w + w));
}

void	map_set(t_map *map, unsigned int h, unsigned int w, char value)
{
	if (h < map->h && w < map->w)
		*(map->data + h * map->w + w) = value;
}
