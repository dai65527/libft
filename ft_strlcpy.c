/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:37:19 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/05 18:19:50 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *restrict dst, const char *restrict src,
				size_t dstsize)
{
	size_t	i;
	int		flag_reach_dstsize;

	if (dstsize > 0)
		flag_reach_dstsize = 0;
	else
		flag_reach_dstsize = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if (i == dstsize - 1)
		{
			dst[dstsize - 1] = '\0';
			flag_reach_dstsize = 1;
		}
		if (flag_reach_dstsize == 0)
			dst[i] = src[i];
		i++;
	}
	if (flag_reach_dstsize == 0)
		dst[i] = '\0';
	return (i);
}
