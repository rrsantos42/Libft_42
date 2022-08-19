/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 04:58:58 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/12 05:04:15 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const char *s1, int c, size_t n)
{
	char *str;
	str = (char *)s1;
	while(n)
	{
		str[n - 1] = c;
		n--;
	}
	return(str);
}