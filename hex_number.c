/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:13:36 by bbayard           #+#    #+#             */
/*   Updated: 2021/11/14 18:13:38 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_num_of_hex_nbr(unsigned int n, char *Up_or_Low)
{
	if (n >= 16)
		ft_num_of_hex_nbr(n / 16, Up_or_Low);
	ft_putchar(Up_or_Low[n % 16]);
}

int	ft_putnbr_hex(unsigned int n, char *Up_or_Low)
{
	int	num_of_number;

	num_of_number = 0;
	ft_num_of_hex_nbr(n, Up_or_Low);
	while (n > 0)
	{
		n = n / 16;
		num_of_number++;
	}
	if (num_of_number == 0)
		return (1);
	return (num_of_number);
}

void	ft_num_of_hex_nbr_p(unsigned long int n, char *Up_or_Low)
{
	if (n >= 16)
		ft_num_of_hex_nbr_p(n / 16, Up_or_Low);
	ft_putchar(Up_or_Low[n % 16]);
}

int	ft_putnbr_hex_p(unsigned long int n, char *Up_or_Low)
{
	int	num_of_number;

	num_of_number = 0;
	ft_num_of_hex_nbr_p(n, Up_or_Low);
	while (n > 0)
	{
		n = n / 16;
		num_of_number++;
	}
	if (num_of_number == 0)
		return (1);
	return (num_of_number);
}

int	ft_putpointer(void *p)
{
	write(1, "0x", 2);
	return (2 + ft_putnbr_hex_p((unsigned long int)p, LOWER));
}
