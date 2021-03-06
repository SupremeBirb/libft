/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 20:42:52 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 18:37:48 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if needs to be freed
** Frees
** Sets to Null
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = 0;
}
