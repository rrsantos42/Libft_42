/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:01:46 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 18:07:05 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strd;
	unsigned char	*strc;

	strd = (unsigned char *)dest;
	strc = (unsigned char *)src;
	i = 0;
	if (!strd && !strc)
		return (NULL);
	if (strd > strc)
	{
		n++;
		while (--n > 0)
			strd[n - 1] = strc[n - 1];
	}
	else
	{
		while (i < n)
		{
			strd[i] = strc[i];
			i++;
		}
	}
	return (dest);
}
