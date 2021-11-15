/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlibft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:16:05 by bbayard           #+#    #+#             */
/*   Updated: 2021/11/14 18:16:13 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# define UPPER "0123456789ABCDEF"
# define LOWER "0123456789abcdef"

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *frmt, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_uns(unsigned int n);
int		ft_putnbr_hex(unsigned int n, char *Up_or_low);
int		ft_putpointer(void *p);
int		ft_putnbr_hex_p(unsigned long int n, char *Up_or_Low);

#endif
