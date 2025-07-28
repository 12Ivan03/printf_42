/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:38:28 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 18:41:45 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnum(int num, int *counter, int *write_check)
{
	char	*str_num;

	str_num = ft_itoa(num);
	ft_putstr_print(str_num, counter, write_check);
	free(str_num);
}
