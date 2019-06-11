/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:21:58 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:46:17 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ptr;

	i = 0;
	k = 0;
	if (!s || !(ptr = (char **)malloc(sizeof(char *) * \
		(ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		if (!(ptr[i] = (char *)malloc(sizeof(char) * \
			(ft_wordlen(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k += 1;
		while (s[k] != c && s[k])
			ptr[i][j++] = s[k++];
		ptr[i][j] = '\0';
		i += 1;
	}
	ptr[i] = NULL;
	return (ptr);
}
