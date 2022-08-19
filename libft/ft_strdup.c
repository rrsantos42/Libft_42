/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:08 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/10 02:25:39 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    int  i;
    int  len;
    char *dup;

    len = 0;
    i = 0;
    while(str[len])
        len++;
    dup = malloc((len + 1) *sizeof (char));
    if(!dup)
        return(NULL);
    while(str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
