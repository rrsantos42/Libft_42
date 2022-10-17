/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:10 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:28:15 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dest_size;

	src_size = ft_strlen(src);
	if (!size)
		return (src_size);
	dest_size = ft_strlen(dest);
	i = dest_size;
	j = 0;
	if (size == 0 || size <= dest_size)
		return (src_size + size);
	while (src[j] && j < (size - dest_size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest_size + src_size);
}
