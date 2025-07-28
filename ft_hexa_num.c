/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:39:22 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 19:52:19 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_num(unsigned int uint, char format, \
					int *counter, int *write_check)
{
	if (uint == 0)
		ft_putstr_print("0", counter, write_check);
	if (format == 'X')
		ft_convert_num_to_hex(uint, 1, counter, write_check);
	else
		ft_convert_num_to_hex(uint, 2, counter, write_check);
	return ;
}
