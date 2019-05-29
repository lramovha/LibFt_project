/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:32:15 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 14:15:09 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    unsigned char   *ps1;
    unsigned char   *ps2;

    ps1 = (unsigned char *)s1;
    ps2 = (unsigned char *)s2;
    while (*ps1 && (*ps1 == *ps2))
    {
        ++ps1;
        ++ps2;
    }
    return (*ps1 - *ps2);
}
