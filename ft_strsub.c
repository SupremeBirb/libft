/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:21:03 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 12:57:19 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	st = ft_strnew(len);
	if (!st)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		st[i] = s[start];
		start++;
	}
	st[i] = '\0';
	return (st);
}
