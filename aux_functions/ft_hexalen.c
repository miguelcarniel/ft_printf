/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:50:51 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/24 19:30:36 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hexalen(unsigned long n)
{
	int	size;

	size = 1;
	while (n >= 16)
	{
		size++;
		n = n / 16;
	}
	return (size);
}
