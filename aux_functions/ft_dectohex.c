/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:48:37 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/25 15:48:56 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_dectohex(unsigned long long int n, int id)
{
	int			size;
	static char	*str;

	size = ft_hexalen(n);
	str = ft_calloc(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
	ft_putstrhexa(str, size - 1, n, id);
	if (id == 0)
	{
		if (str[size - 1] == '0' && size - 1 == 0)
		{
			size += 2;
			write(1, "(nil)", 5);
		}
		else
			ft_printf("0x%s", str);
	}
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}
