/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr_to_hex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:47:49 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/09 11:41:31 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_num_len(unsigned long num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

void	ft_convert_ptr_to_hex(unsigned long num, int *counter, int *write_check)
{
	char	*num_str;
	char	hex_base[17];
	int		i;
	int		temp;

	ft_strlcpy(hex_base, "0123456789abcdef", 17);
	i = ft_num_len(num);
	num_str = (char *)ft_calloc((i + 1), sizeof(char));
	i -= 1;
	while (num > 0)
	{
		temp = num % 16;
		num_str[i] = hex_base[temp];
		num = num / 16;
		i--;
	}
	ft_putstr_print("0x", counter, write_check);
	ft_putstr_print(num_str, counter, write_check);
	free(num_str);
	return ;
}
