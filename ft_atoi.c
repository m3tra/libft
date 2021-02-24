/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:35:04 by fporto            #+#    #+#             */
/*   Updated: 2021/02/15 15:02:33 by fporto           ###   ########.fr       */
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
	while (*s != '\0')
	{
		if (*s == '-' && neg == 1 && pos == 0)
			neg *= -1;
		else if (*s == '+' && pos == 0 && neg == 1)
			pos = 1;
		else if (ft_isdigit(*s) && result == 0)
			result = *s - '0';
		else if (ft_isdigit(*s) && result != 0)
			result = result * 10 + (*s - '0');
		else
			break ;
		s++;
	}
	return (result * neg);
}
