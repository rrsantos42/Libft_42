/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:59 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/24 16:07:35 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int k;

    k = 0;
    i = -1;
    while(dest[k])
        k++;
    while (src[++i])
        dest[k + i] = src[i];
    dest[k + i] = '\0';
    return (dest);
}