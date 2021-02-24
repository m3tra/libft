/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto-@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:38:22 by fporto            #+#    #+#             */
/*   Updated: 2021/02/18 18:31:46 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(int n)
{
	size_t		i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*cat(char *nb, long number, int i, int neg)
{
	if (neg)
		nb[0] = '-';
	while (i >= neg)
	{
		nb[i] = (number % 10) + '0';
		number /= 10;
		i--;
	}
	return (nb);
}

char			*ft_itoa(int n)
{
	char		*nb;
	long		number;
	int			neg;
	size_t		l;
	int			i;

	neg = 0;
	number = n;
	if (n < 0)
	{
		number *= -1;
		neg = 1;
	}
	l = len(number);
	nb = malloc(l + neg + 1);
	if (!nb)
		return (NULL);
	i = l + neg - 1;
	if (n)
		nb = cat(nb, number, i, neg);
	nb[l + neg] = '\0';
	if (!n)
		nb[0] = 0 + 48;
	return (nb);
}
