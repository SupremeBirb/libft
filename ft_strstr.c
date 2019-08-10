/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:06:11 by lelee             #+#    #+#             */
/*   Updated: 2019/08/07 00:27:34 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *to_find)
{
	int i;
	int k;

	i = -1;
	if (!*to_find || (s1 == to_find))
		return ((char*)s1);
	while (s1[++i])
	{
		k = 0;
		while (to_find[k] == s1[i + k])
		{
			if (to_find[k++ + 1] == '\0')
				return ((char*)s1 + i);
		}
	}
	return (0);
}
