/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 06:19:10 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/07 09:27:22 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isinset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trimlen(char const *s1, char const *set)
{
	size_t	count;

	count = 0;
	while (*s1)
	{
		if (!isinset(*s1, set))
			count++;
		s1++;
	}
	return (count);
}

static char		*trimcpy(char *dst, char const *s1, char const *set)
{
	int		i ;

	i = 0;
	while (*s1)
	{
		if (!isinset(*s1, set))
			dst[i++] = *s1;
		s1++;
	}
	dst[i] = 0;
	return (dst);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	len;

	len = trimlen(s1, set);
	dst = (char *)malloc(sizeof(s1) * (len + 1));
	if (!dst)
		return (NULL);
	return (trimcpy(dst, s1, set));
}
