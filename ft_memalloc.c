/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:56:23 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 18:39:55 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates size
** if memory allocation fails return NULL
** Removes all things in the space allocated
** Returns memory
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
