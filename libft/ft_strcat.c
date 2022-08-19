/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:59 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/10 02:26:37 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int k;

    k = 0;
    i = 0;
    while(dest[k] != '\0')
        k++;
    while (src[i] != '\0')
    {
        dest[k + i] = src[i];
        i++;
    }
    dest[k + i] = '\0';
    return (dest);
}