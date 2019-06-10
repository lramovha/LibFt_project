/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:44:22 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/10 15:59:41 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char			*res;
	unsigned int	start;
	unsigned int	size;
	unsigned int	space_count;

	if (!s)
		return (NULL);
	size = (unsigned int)ft_strlen((char*)s);
	space_count = ft_strcntfirstchar((char*)s, " \n\t");
	start = space_count;
	if (size > space_count)
		space_count += ft_strcntlastchar((char*)s, " \n\t");
	size -= space_count;
	if (!(res = ft_memalloc((size_t)size + 1)))
		return (NULL);
	res = ft_strncpy(res, (char*)s + start, size);
	return (res);
}
