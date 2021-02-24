/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto-@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:38:20 by fporto            #+#    #+#             */
/*   Updated: 2021/02/20 03:41:22 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *arr;

	if (nmemb && size)
	{
		arr = malloc(nmemb * size);
		if (!arr)
			return (NULL);
		ft_memset(arr, 0, nmemb * size);
		return (arr);
	}
	else
		return (NULL);
}
