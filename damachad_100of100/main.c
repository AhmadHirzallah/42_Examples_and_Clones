/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:09:44 by damachad          #+#    #+#             */
/*   Updated: 2023/05/04 14:32:45 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		size;

	size = 0;
	printf("ft_printf:\n");
	size = ft_printf("%s\n", "");
	printf("size ft_printf: %i\n", size);
	printf("\nprintf:\n");
	size = 0;
	size = printf("%s\n", "");
	printf("size printf: %i\n", size);
	return (0);
}
