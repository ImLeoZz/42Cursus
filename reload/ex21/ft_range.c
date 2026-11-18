/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:11:41 by lemille           #+#    #+#             */
/*   Updated: 2026/11/09 11:38:16 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	int	*tab;

	i = 0;
	tab = ft_range(0, -12);
	while (i < 0 - (-12))
		__builtin_printf("%d\n", tab[i++]);
	return EXIT_SUCCESS;
}*/
