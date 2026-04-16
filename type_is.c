/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   type_is.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/08 17:06:23 by srosu            #+#    #+#              */
/*   Updated: 2026/04/16 16:44:37 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_ptr_string(char *s, int fd, int *count, va_list ap)
{
	if (s)
		ft_putstr_fd(va_arg(ap, char *), 1, count);
	else
		write(1, "(null)", 6);
}

static void	check_ptr_p(long p, int *count, va_list ap)
{
	if (p)
	{
		write(1, "0x", 2);
		ft_putnbr_base((long) va_arg(ap, void *), "0123456789abcdef", count);
	}
	else
		write(1, "(nil)", 5);
}

void	type_is(char c, va_list ap, int *count)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(ap, int), 1, count);
	if (c == 's')
		check_ptr_string((char *) va_arg(ap, char *), 1, count, ap);
	if (c == 'p')
		check_ptr_p(va_arg(ap, long), count, ap);
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1, count);
	if (c == 'u')
		ft_putnbr_unsigned_fd(va_arg(ap, int), 1, count);
	if (c == 'x')
		ft_putnbr_base((long) va_arg(ap, void *), "0123456789abcdef", count);
	if (c == 'X')
		ft_putnbr_base((long) va_arg(ap, void *), "0123456789ABCDEF", count);
	if (c == '%')
		ft_putchar_fd('%', 1, count);
}
