/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:08:28 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/31 14:34:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ps;
	unsigned char		pc;

	i = 0;
	ps = (unsigned const char *)s;
	pc = (unsigned char)c;
	while (i < n)
	{
		if (ps[i] == pc)
			return ((void *)&ps[i]);
		++i;
	}
	return (NULL);
}
