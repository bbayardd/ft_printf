/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:13:24 by bbayard           #+#    #+#             */
/*   Updated: 2021/11/14 18:13:26 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_num_of_number(int n)
{
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		ft_putnbr(n);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int	ft_putnbr(int n)
{
	int	number;

	number = 0;
	ft_num_of_number(n);
	if (n <= 0)
		number++;
	while (n != 0)
	{
		n = n / 10;
		number++;
	}
	return (number);
}

void	ft_num_of_uns_number(unsigned int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr_uns(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int	ft_putnbr_uns(unsigned int n)
{
	int	number;

	number = 0;
	ft_num_of_uns_number(n);
	if (n == 0)
		number++;
	while (n != 0)
	{
		n = n / 10;
		number++;
	}
	return (number);
}
