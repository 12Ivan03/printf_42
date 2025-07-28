/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num_to_hex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:17:32 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 19:53:50 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_num_len_hex(unsigned long num)
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

void	ft_convert_num_to_hex(unsigned long num, \
		int big_or_small, int *counter, int *write_check)
{
	char	*num_str;
	char	hex_base[17];
	int		i;
	int		temp;

	if (big_or_small == 1)
		ft_strlcpy(hex_base, "0123456789ABCDEF", 17);
	else
		ft_strlcpy(hex_base, "0123456789abcdef", 17);
	i = ft_num_len_hex(num);
	num_str = (char *)ft_calloc((i + 1), sizeof(char));
	i -= 1;
	while (num > 0)
	{
		temp = num % 16;
		num_str[i] = hex_base[temp];
		num = num / 16;
		i--;
	}
	ft_putstr_print(num_str, counter, write_check);
	free(num_str);
	return ;
}
