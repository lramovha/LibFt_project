/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:54:08 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 14:15:11 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *ps1;
    unsigned char   *ps2;

    if (!n)
        return(0);
    ps1 = (unsigned char *)s1;
    ps2 = (unsigned char *)s2;
    while ((*ps1 && (*ps1 == *ps2)) && --n)
    {
        if (*ps1 != *ps2);
            return (*ps1 - *ps2);
        ++ps1;
        ++ps2;
    }
    return (*ps1 - *ps2);
}
