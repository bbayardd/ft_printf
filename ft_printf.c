/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:12:38 by bbayard           #+#    #+#             */
/*   Updated: 2021/11/14 18:12:45 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_encounter(char frmt, va_list ap)
{
	if (frmt == 'c')
		return (ft_putchar((char)va_arg(ap, int)));
	if (frmt == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (frmt == 'p')
		return (ft_putpointer(va_arg(ap, void *)));
	if (frmt == '%')
		return (ft_putchar(frmt));
	if (frmt == 'd' || frmt == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (frmt == 'u')
		return (ft_putnbr_uns(va_arg(ap, unsigned int)));
	if (frmt == 'X')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), UPPER));
	if (frmt == 'x')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), LOWER));
	return (0);
}

int	ft_printf(const char *frmt, ...)
{
	va_list	ap;
	int		num_prnt_ch;
	int		count;

	count = 0;
	num_prnt_ch = 0;
	va_start(ap, frmt);
	while (frmt[count])
	{
		if (frmt[count] == '%')
		{
			num_prnt_ch += ft_encounter(frmt[count + 1], ap);
			count++;
		}
		else
		{
			write(1, &frmt[count], 1);
			num_prnt_ch++;
		}
		count++;
	}
	va_end(ap);
	return (num_prnt_ch);
}
