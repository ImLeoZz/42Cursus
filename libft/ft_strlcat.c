/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikana <nikana@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 21:57:52 by nikana            #+#    #+#             */
/*   Updated: 2026/11/11 14:26:44 by nikana           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	k;
	size_t	l;

	k = 0;
	l = 0;
	dst_len = ft_strlen(dst);
	if ((dst_len >= size))
		return (size + ft_strlen(src));
	while (dst[k])
		k++;
	while (k < (size - 1) && src[l])
		dst[k++] = src[l++];
	dst[k] = '\0';
	return (dst_len + ft_strlen(src));
}
