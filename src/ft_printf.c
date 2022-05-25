/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:10:10 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/25 15:23:02 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convert(char c, va_list ap, int counter)
{
	if (c == 'c')
		counter += ft_putchar(va_arg(ap, int));
	if (c == 's')
		counter += ft_putstr(va_arg(ap, char *));
	if (c == 'p')
	{
		counter += 2;
		counter += ft_dectohex(va_arg(ap, unsigned long long), 0);
	}
	if (c == 'd' || c == 'i')
		counter += ft_putnbr(va_arg(ap, int));
	if (c == 'u')
		counter += ft_putnbr(va_arg(ap, unsigned int));
	if (c == 'x')
		counter += ft_dectohex(va_arg(ap, unsigned int), 1);
	if (c == 'X')
		counter += ft_dectohex(va_arg(ap, unsigned int), 2);
	if (c == '%')
	{
		counter++;
		write(1, "%", 1);
	}
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		counter;
	va_list	ap;

	i = 0;
	counter = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			counter = ft_convert(s[i], ap, counter);
		}
		else
		{
			counter++;
			write(1, &s[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
