/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:45:05 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/05 14:56:48 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint	ft_strlcat(char *dest, char *src, t_uint size)
{
	t_uint	i;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	if (dest[i] == '\0' && i != size)
		return (ft_strlcpy(dest + i, src, size - i) + i);
	return (i + ft_strlen(src));
}
