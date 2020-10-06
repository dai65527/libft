/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 05:41:52 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/06 19:40:27 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dst_c;
	char	*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (dst);
}
