/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:46:18 by mcarneir          #+#    #+#             */
/*   Updated: 2023/05/02 16:23:35 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_putnbr_u(unsigned int n);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printpercent(void);
int	ft_putnbr_dec(int n);
int	ft_putnbr_hex(size_t n, int uplow);
int	ft_printptr(unsigned long n);
int	ft_printf(const char *str, ...);

#endif
