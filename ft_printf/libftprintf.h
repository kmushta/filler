/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 14:50:38 by kmushta           #+#    #+#             */
/*   Updated: 2017/12/24 14:50:39 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <wchar.h>

int				ft_printf_putwchar(wchar_t c);
wchar_t			*ft_printf_wstrnew(unsigned int size);
wchar_t			*ft_printf_wstrndup(const wchar_t *str, unsigned int n);
wchar_t			*ft_printf_wstrrev(wchar_t *str);
unsigned int	ft_printf_wstrlen(const wchar_t *s);
long long int	ft_printf_abs(long long int n);
unsigned int	ft_printf_max3(unsigned int a, unsigned int b, unsigned int c);
char			*ft_printf_strnew(unsigned int size);
unsigned int	ft_printf_strlen(const char *s);
char			*ft_printf_pad(unsigned int size, char c);
char			*ft_printf_strrev(char *str);
char			*ft_printf_strndup(const char *str, unsigned int n);
unsigned int	ft_printf_putstr_del(char **str);
unsigned int	ft_printf_putstr(const char *str);
unsigned int	ft_printf_read_flags(const char *format, int *arr);
unsigned int	ft_printf_read_width(const char *format, int *arr);
unsigned int	ft_printf_read_precision(const char *format, int *arr);
unsigned int	ft_printf_read_modificators(const char *format, int *arr);
int				ft_printf_read_transformation(const char *format, int *arr);
int				ft_printf_c(const int *arr, unsigned long long int arg);
int				ft_printf_d(const int *arr, unsigned long long int arg);
int				ft_printf_o(int *arr, unsigned long long int arg);
int				ft_printf_p(const int *arr, unsigned long long int arg);
int				ft_printf_s(const int *arr, unsigned long long int arg);
int				ft_printf_u(const int *arr, unsigned long long int arg);
int				ft_printf_x(int *arr, unsigned long long int arg);
int				ft_printf(const char *format, ...);

#endif
