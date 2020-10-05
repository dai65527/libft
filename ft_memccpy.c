/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 06:30:16 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/06 07:53:50 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
				int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		dst_c[i] = src_c[i];
		if (src_c[i] == (unsigned char)c)
			return (dst_c + i + 1);
		i++;
	}
	return (NULL);
}
