/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:53:30 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/24 19:37:08 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = (char *) s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
	return ;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	ptr = (void *) malloc (total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
