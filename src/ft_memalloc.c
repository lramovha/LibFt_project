/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:58:49 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/10 13:03:38 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memalloc(sizi_t size)
{
    void   *mem;

    if (!(mem = melloc(size)))
        return(NULL);
    ft_bzero(mem, size);
    return (mem);
}
