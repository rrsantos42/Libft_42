/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:09:21 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/10 03:37:27 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
    int	i;
    int	j;
    
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i + j])
        {
            if (to_find[j + 1] == '\0')
                return ((char *)&str[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}