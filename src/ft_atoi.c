/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:19:26 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 15:45:08 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nbr;

    i = 0;
    nbr = 0;
    sign = 1;
    if (!str[i])
        return (0);
    while (ft_isspace(str[i]))
        ++i;
    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
        sign = -1;
    while (str[i] >= '0' && str[i] <= '9')
        nbr = (nbr * 10) + (str[i++] - '0');
    return (nbr * sign);
}
