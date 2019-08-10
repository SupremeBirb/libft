/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:46:40 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 18:40:41 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch;
	unsigned char	c1;

	i = -1;
	ch = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
		if (ch[++i] == c1)
			return (ch + i);
	return (NULL);
}
