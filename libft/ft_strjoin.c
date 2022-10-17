/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:18:27 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 18:00:24 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		i;
	int		j;
	int		size1;
	int		size2;
	char	*newstr;

	if (!str1 || !str2)
		return (NULL);
	i = -1;
	j = -1;
	size1 = ft_strlen(str1);
	size2 = ft_strlen(str2);
	newstr = malloc((size1 + size2 + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (str1[++i])
		newstr[i] = str1[i];
	while (str2[++j])
		newstr[i + j] = str2[j];
	newstr[i + j] = '\0';
	return (newstr);
}
