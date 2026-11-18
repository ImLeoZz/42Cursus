/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:38:34 by lemille           #+#    #+#             */
/*   Updated: 2026/11/09 13:20:09 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= (nb / i))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	__builtin_printf("%d\n", ft_sqrt(2147483647));
	__builtin_printf("%d\n", ft_sqrt(25));
}*/
