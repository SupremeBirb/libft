/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:12:58 by lelee             #+#    #+#             */
/*   Updated: 2019/08/07 22:41:16 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Purpose:
** takes a list and applies each link to a function. returns a new list.
** This results in successive applications of the function recursively
** until the end of the list is reached and the newlist is returned.
*/

/*
** Declaring a new t_list struct variable
** Check if both the function and the link exist
** Applies function to the link in the list
** Checking for the end of the list that we are applying the funciton to
** Advances to the next link and and applies this function unitl the end of
** the list
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newl;

	if (lst != NULL && f != NULL)
	{
		newl = f(lst);
		if (newl != NULL && lst->next != NULL)
			newl->next = ft_lstmap(lst->next, f);
		return (newl);
	}
	return (NULL);
}
