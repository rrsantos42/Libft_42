/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:58:32 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 20:44:56 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*s1;

	s1 = (char *)str;
	i = ft_strlen(s1);
	while (s1[i] != c && i != 0)
		i--;
	if (s1[i] == c)
		return (&s1[i]);
	return (NULL);
}
