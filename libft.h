/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 12:01:52 by dnakano           #+#    #+#             */
/*   Updated: 2020/10/05 17:55:05 by dnakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef	unsigned int	t_uint;

int	    	ft_isalpha(int c);
int	    	ft_isdigit(int c);
int	    	ft_isalnum(int c);
int	    	ft_isascii(int c);
int	    	ft_isprint(int c);

int			ft_strlen(char *str);
t_uint		ft_strlcpy(char *dest, char *src, t_uint destsize);
t_uint  	ft_strlcat(char *dest, char *src, t_uint size);

#endif
