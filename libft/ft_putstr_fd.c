/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:57 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/24 16:01:03 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char const *str, int fd)
{
    int i;

    i = -1;
    if (!str)
        return;
    while(str[++i])
        ft_putchar_fd(str[i], fd);
}