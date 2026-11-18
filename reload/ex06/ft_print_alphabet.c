/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:00:35 by lemille           #+#    #+#             */
/*   Updated: 2026/11/04 11:33:16 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c ;

	c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}

/*
int	main(int ac, char **argv)
{
	(void)ac;
	ft_print_alphabet();
}*/
