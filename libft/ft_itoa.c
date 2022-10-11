/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:52:45 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 17:55:09 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_len(int nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	size_t		len;
	long int	nb;
	char		*str;

	if (num == 0)
		return ("0");
	len = nb_len(num);
	nb = num;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + 48;
		len--;
		nb = nb / 10;
	}
	return (str);
}
