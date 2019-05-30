/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:03:41 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 16:36:09 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *pb;

	pb = (unsigned char *)b;
	while (len--)
		*pb++ = (unsigned char)c;
	return (b);
}
