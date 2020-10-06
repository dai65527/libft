/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:31:16 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/06 10:31:58 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_c;
	char	*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	if (dst_c <= src_c || (size_t)(dst_c - src_c) >= len)
	{
		i = 0;
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			dst_c[i - 1] = src_c[i - 1];
			i--;
		}
	}
	return (dst);
}
