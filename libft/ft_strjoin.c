/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:18:27 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/10 18:55:21 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	int i;
	int j;
	int size1;
	int size2;
	char *newstr;
	
	i = 0;
	j = 0;
	size1 = ft_strlen(str1);
	size2 = ft_strlen(str2);
	if(!str1 || !str2)
		return(NULL);
	newstr = malloc((size1 + size2 + 1) * sizeof(char));
	if(!newstr)
		return(NULL);
	while (str1[i])
	{
		newstr[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		newstr[i + j] = str2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return(newstr);
}