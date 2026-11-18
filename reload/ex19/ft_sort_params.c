/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:25:22 by lemille           #+#    #+#             */
/*   Updated: 2026/11/09 11:24:33 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_swap(char **strs, int i, int j)
{
	char	*c;

	c = strs[i];
	strs[i] = strs[j];
	strs[j] = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char **strs, int size)
{
	int		i;
	int		j;

	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if ((ft_strcmp(strs[j], strs[i])) > 0)
				ft_swap(strs, i, j);
			else
				i++;
		}
		j++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac == 1)
		return (0);
	else
	{
		ft_sort(av, ac);
		while (i < ac)
		{
			ft_putstr(av[i++]);
			ft_putstr("\n");
		}
	}
	return (0);
}
