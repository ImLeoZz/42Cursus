/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:58:21 by lemille           #+#    #+#             */
/*   Updated: 2026/11/13 08:36:24 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_checkend(char const *s1, char const *set)
{
	size_t	end;
	size_t	k;

	k = 0;
	end = ft_strlen(s1) - 1;
	while (set[k])
	{
		if (s1[end] == set[k])
		{
			end--;
			k = 0;
		}
		else
			k++;
	}
	return (end);
}

static	size_t	ft_checkstart(char const *s1, char const *set)
{
	size_t	start;
	size_t	k;

	k = 0;
	start = 0;
	while (set[k])
	{
		if (s1[start] == set[k])
		{
			start++;
			k = 0;
		}
		else
			k++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len;
	size_t	start;
	size_t	end;

	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, set);
	len = (ft_strlen(s1) - (start + (ft_strlen(s1) - end)));
	dest = malloc((len + 1));
	
}
