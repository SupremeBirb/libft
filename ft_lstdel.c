/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:17:16 by lelee             #+#    #+#             */
/*   Updated: 2019/08/06 00:32:03 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *next;

	temp = *alst;
	if (del != NULL)
	{
		while (temp)
		{
			next = temp->next;
			del(temp->content, temp->content_size);
			free(temp);
			temp = next;
		}
		*alst = NULL;
	}
}
