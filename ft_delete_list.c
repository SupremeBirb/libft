/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:53:26 by lelee             #+#    #+#             */
/*   Updated: 2019/09/02 04:16:56 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		deletelist(struct s_list **curr)
{
	struct s_list *node;
	struct s_list *next;

	node = *curr;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*curr = NULL;
}
