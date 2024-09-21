/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 02:07:08 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/08/28 02:07:08 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

t_data	*toward_specifier(t_data *format)
{
	while (!ft_strchr(TYPES, *format) && *format)
		format++;
	return (format + 1);
}

int	printchar(int width, char c, int offset)
{
	int	printed;

	printed = width - offset;
	while (--width >= offset)
		write(1, &c, 1);
	return (printed);
}
