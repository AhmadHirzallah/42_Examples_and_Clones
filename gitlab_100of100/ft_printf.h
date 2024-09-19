/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:36:17 by tfriedri          #+#    #+#             */
/*   Updated: 2022/04/08 18:06:04 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *input, ...);
int		print_pointer(unsigned long value, int asc);
int		print_unsigned(unsigned int nb);
int		print_string(char *s);
int		print_int(int n);
int		print_char(char c);
int		print_hex(unsigned int value, int asc);

#endif