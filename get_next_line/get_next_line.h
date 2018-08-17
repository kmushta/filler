/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 13:41:24 by kmushta           #+#    #+#             */
/*   Updated: 2017/12/02 13:41:35 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024

typedef struct			s_gnl_list
{
	int					fd;
	char				*data;
	struct s_gnl_list	*next;
	struct s_gnl_list	*prev;
}						t_gnl_list;

int						get_next_line(const int fd, char **line);

#endif
