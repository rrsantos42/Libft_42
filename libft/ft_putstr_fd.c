/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:57 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/10 02:28:22 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char const *str, int fd)
{
    int i;

    i = 0;
    if (!str)
        return;
    while(str[i])
    {
        ft_putchar_fd(str[i], fd);
        i++;
    }
}