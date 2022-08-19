/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:01 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/15 20:47:59 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(char const *str, int c)
{
    int i;
    char *s1;

    i = 0;
    s1 = (char *)str;
    while (s1[i])
    {
        if(s1[i] == c)
            return (&s1[i]);
        i++;
    }
    if (s1[i] == c)
        return(&s1[i]);
    
    return (NULL);
}