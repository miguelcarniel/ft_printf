/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:23:18 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/24 20:08:14 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_printf(const char *s, ...);
int		ft_putnbr(long int n);
int		ft_dectohex(unsigned long long int n, int id);
int		ft_hexalen(unsigned long n);
char	*ft_putstrhexa(char *str, int size, unsigned long int n, int id);
void	*ft_calloc(size_t nmemb, size_t size);
#endif