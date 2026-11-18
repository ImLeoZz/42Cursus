/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:57:31 by lemille           #+#    #+#             */
/*   Updated: 2026/11/06 12:13:06 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
void	ft_putnbr(int nb)
{
	__builtin_printf("%d\n", nb);
}
int	main(int argc, char *argv[])
{
	int	tab[5] = {12, 12, 22, 32, 89};

	ft_foreach(tab, 5, ft_putnbr);
	return (0);
}*/
