/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:57:42 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 12:10:30 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes a link and adds it to the head (beginning) of the list.
** Checking for empty link
** Set the new link's element to the first link pointed by alst
** Set pointer of alst to new link. This sets the new link to the head
** of the linked list.
*/
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
