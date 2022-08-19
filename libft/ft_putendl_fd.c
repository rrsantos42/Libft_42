/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:53 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/09 04:49:33 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char const *str, int fd)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
       ft_putchar_fd(str[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}