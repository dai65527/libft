/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:01:52 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/05 15:46:58 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef	unsigned int	t_uint;

int			ft_strlen(char *str);
t_uint		ft_strlcpy(char *dest, char *src, t_uint destsize);
t_uint  	ft_strlcat(char *dest, char *src, t_uint size);

#endif
