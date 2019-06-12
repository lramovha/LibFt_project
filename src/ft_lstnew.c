/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:51:44 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/12 15:54:59 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ls;

	if (!(ls = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ls->content = NULL;
		ls->content_size = 0;
	}
	else
	{
		if ((ls->content = ft_dup(content, content_size)) == NULL)
			return (NULL);
		ls->content_size = content_size;
	}
	ls->next = NULL;
	return (ls);
}
