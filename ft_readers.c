/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:48:30 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/25 13:48:32 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "kmushta.filler.h"
#include "get_next_line.h"
#include "libft.h"

t_map	*read_map(void)
{
	t_map			*map;
	char			*line;
	unsigned int	dim[2];
	unsigned int	i;

	get_next_line(0, &line);
	if (((i = 0) == 0) && ft_strncmp(line, "Plateau", 7))
		return (0);
	*dim = (unsigned int)ft_atoi(line + 8);
	*(dim + 1) = (unsigned int)ft_atoi(ft_strchr(line + 8, ' '));
	map = new_map(*dim, *(dim + 1));
	free(line);
	get_next_line(0, &line);
	free(line);
	get_next_line(0, &line);
	while (i < *dim && map_line(map, line + 4))
		if (++i < *dim)
		{
			free(line);
			get_next_line(0, &line);
		}
	free(line);
	return (map);
}

char	read_p(void)
{
	char	*line;
	char	c;

	get_next_line(0, &line);
	c = *(line + 10);
	free(line);
	return (c);
}

t_map	*read_piece(void)
{
	t_map			*map;
	char			*line;
	unsigned int	dim[2];
	unsigned int	i;

	get_next_line(0, &line);
	if (ft_strncmp(line, "Piece", 5))
		return (0);
	*dim = (unsigned int)ft_atoi(line + 6);
	*(dim + 1) = (unsigned int)ft_atoi(ft_strchr(line + 6, ' '));
	map = new_map(*dim, *(dim + 1));
	free(line);
	get_next_line(0, &line);
	i = 0;
	while (i < *dim)
	{
		map_line(map, line);
		if (++i < *dim)
		{
			free(line);
			get_next_line(0, &line);
		}
	}
	free(line);
	return (map);
}
