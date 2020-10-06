/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:01:52 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/06 09:40:23 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void		*ft_memccpy(void *restrict dst, const void *restrict src,
				int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

int			ft_toupper(int c);
int			ft_tolower(int c);

int			ft_strlen(const char *s);
size_t		ft_strlcpy(char *restrict dst, const char *restrict src,
				size_t dstsize);
size_t		ft_strlcat(char *restrict dst, const char *restrict src,
				size_t dstsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
