/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:10:25 by lelee             #+#    #+#             */
/*   Updated: 2019/08/07 22:39:24 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a node to start a linked list
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newl;

	if (!(newl = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	if (!content)
	{
		newl->content = NULL;
		newl->content_size = 0;
	}
	else
	{
		newl->content = malloc(content_size);
		if (!newl->content)
			return (NULL);
		ft_memmove((newl->content), content, content_size);
		newl->content_size = content_size;
	}
	newl->next = NULL;
	return (newl);
}
