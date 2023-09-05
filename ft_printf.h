/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:03:32 by dley              #+#    #+#             */
/*   Updated: 2023/06/01 18:32:12 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int			ft_conv(char c, va_list args);
int			ft_printf(const char *str, ...);

int			ft_count(long n);
int			ft_count_pos(unsigned int n);
int			ft_count_base(unsigned long long n);

void		ft_putchar(char c);
int			ft_putstr(char *str);
void		ft_putnbr(int n);
void		ft_putnbr_pos(unsigned int n);
void		ft_base(unsigned long long nb, const char *base);

int			ft_put_c(int arg);
int			ft_put_s(char *arg);
int			ft_put_p(void *arg);
int			ft_put_d_i(int arg);
int			ft_put_u(unsigned int arg);

int			ft_put_pourcent(void);
int			ft_put_x_xx(unsigned int arg, const char min_or_maj);

#endif
