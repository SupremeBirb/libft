/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:50:04 by lelee             #+#    #+#             */
/*   Updated: 2019/08/06 00:34:27 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes a function and applies it on every link in a list
** Assume that function f allocates memory for the new list
** Check if Function exists
** While not at the end of list, pass values through the function
** Send the current link to the function
** Move to the next link
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void ((*f)(t_list *elem)))
{
	if (f != NULL)
	{
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
