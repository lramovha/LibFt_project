/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:25:26 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 16:47:12 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char*)src;
	while (i < n)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (unsigned char)c)
			return (&pdst[i + 1]);
		++i;
	}
	return (NULL);
}
