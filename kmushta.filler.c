/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kmushta.filler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:56:11 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:56:15 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "kmushta.filler.h"
#include "libftprintf.h"

int		check_piece(t_map *map, t_map *piece, int h, int w)
{
	int		i;
	int		j;
	int		q;
	int		c;

	q = 0;
	i = -1;
	while (++i < (int)piece->h && ((j = -1) + 2))
		while (++j < (int)piece->w)
		{
			if (map_get(piece, i, j) == '*')
			{
				c = map_get(map, h + i, w + j);
				if (h + i >= (int)map->h || w + j >= (int)map->w || (g_p == '2'
					&& (c == 'O' || c == 'o')) || (g_p == '1' && (c == 'X' || c
					== 'x')) || (i + h < 0 || j + w < 0))
					return (0);
				if ((g_p == '2' && (c == 'X' || c == 'x')) || (g_p == '1' && (c
					== 'O' || c == 'o')))
					q++;
			}
		}
	if (q == 1)
		return (1);
	return (0);
}

t_map	*put_map(t_map *map, t_map *piece)
{
	t_map			*new;
	unsigned int	i;
	unsigned int	j;

	if (!(new = new_map(map->h + piece->h - 1, map->w + piece->w - 1)))
		return (0);
	i = 0;
	while (i < new->h)
	{
		j = 0;
		while (j < new->w)
		{
			if (check_piece(map, piece, i - piece->h + 1, j - piece->w + 1))
				map_set(new, i, j, '*');
			else
				map_set(new, i, j, '.');
			j++;
		}
		i++;
	}
	return (new);
}

int		put_piece2(t_map *map, t_map *put, t_map *p)
{
	t_map			*man;
	int				i;
	int				j;
	int				coords[3];

	man = get_man(map);
	coords[2] = 2147483647;
	set_coords(coords, 0, 0);
	i = -1;
	while (++i < (int)put->h && ((j = -1) + 2))
		while (++j < (int)put->w)
			if (map_get(put, i, j) == '*')
			{
				if (coords[0] == 0 && coords[1] == 0)
					set_coords(coords, i - p->h + 1, j - p->w + 1);
				if (get_sum(man, p, i - p->h + 1, j - p->w + 1) < coords[2])
				{
					coords[2] = get_sum(man, p, i - p->h + 1, j - p->w + 1);
					set_coords(coords, i - p->h + 1, j - p->w + 1);
				}
			}
	del_map(&man);
	if (coords[2] < 2147483647)
		return (ft_printf("%d %d\n", coords[0], coords[1]));
	return (0);
}

int		put_piece(t_map *map, t_map *put, t_map *piece)
{
	if (!g_sp[0] && !g_sp[1])
		init_sp(map);
	re_sp(map);
	if (!g_sp[2])
	{
		if ((int)map->h < 2 * g_sp[0])
		{
			if ((int)map->w < 2 * g_sp[1])
				return (go_ul(put, piece));
			else
				return (go_ur(put, piece));
		}
		else
		{
			if ((int)map->w < 2 * g_sp[1])
				return (go_dl(put, piece));
			else
				return (go_dr(put, piece));
		}
	}
	else
		return (put_piece2(map, put, piece));
	return (0);
}

int		main(void)
{
	t_map		*map;
	t_map		*piece;
	t_map		*p_map;

	g_p = read_p();
	while (1)
	{
		map = read_map();
		piece = read_piece();
		if (map && piece)
		{
			p_map = put_map(map, piece);
			if (!put_piece(map, p_map, piece))
				return (write(1, "0 0\n", 4) * 0);
			if (p_map)
				del_map(&p_map);
		}
		if (!piece)
			return (0);
		del_map(&map);
		del_map(&piece);
	}
	return (0);
}
