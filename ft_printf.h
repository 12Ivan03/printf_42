/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavlov <ipavlov@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:02:30 by ipavlov           #+#    #+#             */
/*   Updated: 2024/11/08 20:15:54 by ipavlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_print(char c, int *counter, int *write_check);
void	ft_putstr_print(char *str, int *counter, int *write_check);
void	ft_print_address(void *ptr, int *counter, int *write_check);
void	ft_convert_num_to_hex(unsigned long num, \
						int big_or_small, int *counter, int *write_check);
void	ft_convert_ptr_to_hex(unsigned long num, \
						int *counter, int *write_check);
void	ft_putnum(int num, int *counter, int *write_check);
void	ft_unsigned_int(unsigned int uint, int *counter, \
						int *write_check);
void	ft_hexa_num(unsigned int uint, char format, \
						int *counter, int *write_check);
void	ft_write(char c, int *write_check);

#endif
