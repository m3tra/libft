/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:39:02 by fporto            #+#    #+#             */
/*   Updated: 2021/02/15 16:43:41 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') \
	|| (c >= 'A' && c <= 'F') \
	|| (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
