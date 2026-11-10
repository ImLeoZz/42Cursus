/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:38:29 by lemille           #+#    #+#             */
/*   Updated: 2026/11/10 10:58:52 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			k;

	k = 0;
	p = (unsigned char *)s;
	while (k < n)
	{
		*p = (unsigned char)c;
		p++;
		k++;
	}
	return (s);
}
