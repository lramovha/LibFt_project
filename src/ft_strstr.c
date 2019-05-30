/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:01:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 13:50:29 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack[i]);
	while (haystack[i])
	{
		while ((haystack[i + j] == needle[j] && needle[j]))
			++j;
		if (!neddle[j])
			return ((char *)&haystack[i]);
		j = 0;
		++i;
	}
	return (NULL);
}
