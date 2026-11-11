/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:35:28 by lemille           #+#    #+#             */
/*   Updated: 2026/11/11 13:04:45 by nikana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

#endif
