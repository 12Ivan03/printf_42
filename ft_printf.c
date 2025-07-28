/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:32:18 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 20:20:06 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_find_format(va_list args, char format, \
			int *counter, int *write_check)
{
	if (format == 'c')
		ft_putchar_print((char)va_arg(args, int), counter, write_check);
	else if (format == 's')
		ft_putstr_print(va_arg(args, char *), counter, write_check);
	else if (format == 'p')
		ft_print_address(va_arg(args, void *), counter, write_check);
	else if (format == 'i' || format == 'd')
		ft_putnum(va_arg(args, int), counter, write_check);
	else if (format == 'u')
		ft_unsigned_int(va_arg(args, unsigned int), counter, write_check);
	else if (format == 'x' || format == 'X')
		ft_hexa_num(va_arg(args, unsigned int), format, counter, write_check);
	else if (format == '%')
		ft_putchar_print(format, counter, write_check);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		counter;
	int		write_check;

	write_check = 0;
	counter = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_find_format(args, str[i], &counter, &write_check);
		}
		else
			ft_putchar_print(str[i], &counter, &write_check);
		i++;
	}
	va_end(args);
	if (write_check == -1)
		return (-1);
	return (counter);
}
