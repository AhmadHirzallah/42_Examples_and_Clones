/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:15:25 by damachad          #+#    #+#             */
/*   Updated: 2023/05/04 15:01:17 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putchar_2(char c);
int		ft_putstr_2(char *s);
int		ft_putnbr_rec(int n);
int		ft_putnbr_hex(unsigned int n);
int		ft_putnbr_uphex(unsigned int n);
int		ft_put_add(unsigned long int n);
int		ft_printf(const char *str, ...);
int		ft_putnbr_unsig(unsigned int nb);
int		ft_convert(char format, va_list args);

#endif
