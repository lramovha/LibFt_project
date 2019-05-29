/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:50:10 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 13:15:34 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int j;

    i = ft_strlen(s);
    j = 0;
    while ( i >= j)
    if (s[i - j++] == c)
        return ((char *)&s[i - (j - 1)]);
    return (NULL);
}
