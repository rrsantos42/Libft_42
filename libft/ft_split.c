/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:09:34 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:26:30 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *s, char c, size_t i)
{
	size_t	res;

	res = 0;
	if (!s)
		return (0);
	while (s[i] == c && s[i])
			i++;
	if (i == ft_strlen(s))
		return (0);
	i = 0;
	if (s[i] && s[i] != c)
		res += 1;
	while (s[i])
	{							
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		res += 1;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	res;
	char	**split;

	if (!s)
		return (NULL);
	res = word_counter(s, c, 0);
	split = malloc((res + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] && k < res)
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		split[k++] = ft_substr(s, j, i - j);
	}
	split[res] = 0;
	return (split);
}
