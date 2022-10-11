/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:39:04 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 20:47:09 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_set( const char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	x = (ft_strlen(s1));
	while (s1[j] && find_set(s1[j], set))
		j++;
	while (x > j && find_set(s1[x - 1], set))
		x--;
	trim = (char *)malloc(((x - j) + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (s1[i] && x > j)
	{
		trim[i++] = s1[j++];
	}
	trim[i] = '\0';
	return (trim);
}
