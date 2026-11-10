/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:44:35 by lemille           #+#    #+#             */
/*   Updated: 2026/11/10 15:57:01 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	k;

	k = 0;
	len = ft_strlen(src);
	while (k < size - 1 && *src)
	{
		*dest++ = *src++;
		k++;
	}
	*dest = '\0';
	return (len);
}
