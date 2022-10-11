/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:15 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 20:40:39 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[k] != '\0')
		k++;
	while (src[i] != '\0' || i < size)
	{
		dest[k + i] = src[i];
		i ++;
	}
	dest[k + i] = '\0';
	return (dest);
}
