/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:51:48 by lemille           #+#    #+#             */
/*   Updated: 2026/11/06 18:52:31 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../includes/ft_header.h"

int	ft_check_txt(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_file(char *file)
{
	char	buf[64];
	int		fd;
	int		n;
	int		ok;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	ok = 1;
	n = read(fd, buf, sizeof(buf));
	while (n > 0 && ok)
	{
		ok = ft_check_txt(buf, n);
		n = read(fd, buf, sizeof(buf));
	}
	close(fd);
	if (n < 0)
		return (0);
	return (ok);
}

int	ft_display_file(char *file)
{
	char	buf[64];
	int		fd;
	int		n;

	if (!ft_check_file(file))
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	n = read(fd, buf, sizeof(buf));
	while (n > 0)
	{
		write(1, buf, n);
		n = read(fd, buf, sizeof(buf));
	}
	close(fd);
	return (n < 0);
}
