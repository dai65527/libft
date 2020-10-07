/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:42:08 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/07 21:03:04 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int			ft_atoi(const char *str)
{
	int				sign;
	unsigned long	abs;

	sign = 1;
	abs = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		abs = abs * 10 + *(str++) - '0';
		if (abs >= (unsigned long)(-LONG_MIN) && sign < 0)
			return ((int)(LONG_MIN));
		else if (abs >= LONG_MAX && sign > 0)
			return ((int)(LONG_MAX));
	}
	return ((int)(sign * abs));
}
