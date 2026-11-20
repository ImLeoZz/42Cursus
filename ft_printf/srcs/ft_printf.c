/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 08:31:02 by lemille           #+#    #+#             */
/*   Updated: 2026/11/20 19:06:02 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *f, ...)
{
	void	*ap;

	ap = malloc(sizeof(ap));
	va_start(ap, f);
	return (0);
}
