/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:37:19 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/05 14:58:31 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint		ft_strlcpy(char *dest, char *src, t_uint destsize)
{
	t_uint	i;
	int		flag_reach_destsize;

	if (destsize > 0)
		flag_reach_destsize = 0;
	else
		flag_reach_destsize = 1;
	i = 0;
	while (src[i] != '\0')
	{
		if (i == destsize - 1)
		{
			dest[destsize - 1] = '\0';
			flag_reach_destsize = 1;
		}
		if (flag_reach_destsize == 0)
			dest[i] = src[i];
		i++;
	}
	if (flag_reach_destsize == 0)
		dest[i] = '\0';
	return (i);
}
