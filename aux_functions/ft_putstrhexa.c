/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:03:06 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/24 19:30:58 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	ft_hex_to_char(unsigned long long int n, int id)
{
	if (n < 10)
		return (n + 48);
	if (n >= 10)
	{
		if (id == 0 || id == 1)
			return (n + 87);
		else
			return (n + 55);
	}
	return (0);
}

char	*ft_putstrhexa(char *str, int size, unsigned long int n, int id)
{
	unsigned long int	div;

	div = 0;
	while (n != 0)
	{
		div = n % 16;
		str[size--] = ft_hex_to_char(div, id);
		n = n / 16;
	}
	return (str);
}
