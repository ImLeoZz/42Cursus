/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:49:14 by lemille           #+#    #+#             */
/*   Updated: 2026/11/13 18:41:45 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	*ft_strrev(char *str)
{
	char	temp;
	size_t	k;
	size_t	l;

	k = 0;
	l = ft_strlen(str);
	while (k < l / 2)
	{
		temp = str[k];
		str[k++] = str[l];
		str[l++] = temp;
	}
	return (str);
}

static size_t	ft_intlen(long int nb)
{
	size_t	k;

	k = 1;
	if (nb < 0)
		nb *= -1;
	while ((nb / 10) >= 10)
	{
		nb /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char		*dest;
	size_t		len;
	long int	nb;
	size_t		k;

	k = 0;
	nb = n;
	len = ft_intlen(nb);
	if (nb < 0)
	{
		dest = malloc(len + 2);
		if (!dest)
			return (NULL);
		nb *= -1;
		dest[k++] = '-';
	}
	else
		dest = malloc(len + 1);
	while (k < len)
	{
		dest[k++] = (nb % 10) + '0';
		nb /= 10;
	}
	dest[k] = '\0';
	return (ft_strrev(dest));
}
