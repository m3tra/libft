/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto-@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:35:04 by fporto            #+#    #+#             */
/*   Updated: 2021/03/01 19:57:16 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' \
	|| c == '\t' || c == '\v')
	{
		return (1);
	}
	else
		return (0);
}

int			ft_atoi(const char *s)
{
	int		neg;
	int		pos;
	int		result;

	neg = 1;
	pos = 0;
	result = 0;
	while (*s && (isspace(*s)))
		s++;
	if (*s && *s == '-')
	{
		neg *= -1;
		s++;
	}
	if (*s && *s == '+')
	{
		pos = 1;
		s++;
	}
	if (neg == -1 && pos == 1)
		return (result);
	while (ft_isdigit(*s))
		result = result * 10 + (*s++ - '0');
	return (result * neg);
}
