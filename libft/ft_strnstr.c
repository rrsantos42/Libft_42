/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:58:26 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 17:58:12 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[i])
		return ((char *)s1);
	while ((i < len) && (s1[i] != '\0'))
	{
		j = 0;
		while (s1[i + j] == to_find[j] && ((i + j) < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&(s1[i]));
			j++;
		}
		i++;
	}
	return (0);
}
