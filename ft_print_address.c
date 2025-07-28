/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:11:01 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 19:28:54 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	ft_print_address(void *ptr, int *counter, int *write_check)
{
	unsigned long	num;

	num = (unsigned long)ptr;
	if (ptr == 0 || ptr == NULL)
		ft_putstr_print("(nil)", counter, write_check);
	else
		ft_convert_ptr_to_hex(num, counter, write_check);
}
