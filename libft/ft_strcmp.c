/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:03 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/24 16:07:56 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *str1, const char *str2)
{
	int i;

	i = 0;
	while(str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}