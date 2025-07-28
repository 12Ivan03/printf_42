/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:54:09 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 18:42:07 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_uint_len(unsigned int uint)
{
	int	i;

	i = 0;
	while (uint > 0)
	{
		uint = uint / 10;
		i++;
	}
	return (i);
}

void	ft_unsigned_int(unsigned int uint, int *counter, int*write_check)
{
	unsigned int	uint_len;
	char			*str_uint;

	if (uint == 0)
	{
		str_uint = (char *)ft_calloc(2, sizeof(char));
		str_uint[0] = '0';
		ft_putstr_print(str_uint, counter, write_check);
		free(str_uint);
		return ;
	}
	uint_len = ft_uint_len(uint);
	str_uint = (char *)ft_calloc((uint_len + 1), sizeof(char));
	uint_len -= 1;
	while (uint > 0)
	{
		str_uint[uint_len] = (uint % 10) + '0';
		uint = uint / 10;
		uint_len--;
	}
	ft_putstr_print(str_uint, counter, write_check);
	free(str_uint);
}
