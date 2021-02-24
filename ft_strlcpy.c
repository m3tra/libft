/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto-@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:35:32 by fporto            #+#    #+#             */
/*   Updated: 2021/02/24 23:14:24 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	// size_t	i;

	// i = 0;
	// if (size)
	// {
	// 	while (i < size - 1 && src[i])
	// 	{
	// 		dest[i] = src[i];
	// 		i++;
	// 	}
	// 	dest[i] = '\0';
	// }
	// return (ft_strlen(src));
	return (strlcpy(dest, src, size));
}
