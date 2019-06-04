/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:56:37 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/04 14:42:30 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = -1;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (psrc > pdst)
		while (len-- > 0)
			pdst[len] = psrc[len];
	else
		while (++i < len)
			pdst[i] = psrc[i];
	return (pdst);
}
