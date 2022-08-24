/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:53 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/24 16:00:13 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char const *str, int fd)
{
    int i;

    i = -1;
    while(str[++i])
       ft_putchar_fd(str[i], fd);
    ft_putchar_fd('\n', fd);
}