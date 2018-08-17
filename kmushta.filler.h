/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kmushta.filler.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 15:14:19 by kmushta           #+#    #+#             */
/*   Updated: 2018/02/11 15:14:20 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KMUSHTA_FILLER_H
# define KMUSHTA_FILLER_H

typedef struct		s_map
{
	unsigned int	h;
	unsigned int	w;
	int				*data;
}					t_map;

int					go_ul(t_map *put, t_map *piece);
int					go_ur(t_map *put, t_map *piece);
int					go_dl(t_map *put, t_map *piece);
int					go_dr(t_map *put, t_map *piece);
int					man_full(t_map *map);
int					min_it(t_map *manh, int i, int j);
void				next_it(t_map *manh, t_map *map);
t_map				*get_man(t_map *map);
int					get_sum(t_map *map, t_map *piece, unsigned int h,
	unsigned int w);
void				del_map(t_map **map);
t_map				*new_map(unsigned int height, unsigned int width);
int					map_line(t_map *map, const char *s);
char				map_get(t_map *map, unsigned int h, unsigned int w);
void				map_set(t_map *map, unsigned int h, unsigned int w,
	char value);
t_map				*read_map(void);
char				read_p(void);
t_map				*read_piece(void);
void				init_sp(t_map *map);
void				make_resp(t_map *map, int *tab, int i);
void				re_sp(t_map *map);
void				set_coords(int *tab, int a, int b);

int					g_sp[3];
char				g_p;

#endif
