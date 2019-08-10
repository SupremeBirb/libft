/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:41:19 by lelee             #+#    #+#             */
/*   Updated: 2019/08/06 01:05:29 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *to_find, size_t n)
{
	size_t i;
	size_t k;

	i = 0;
	if (!*to_find)
		return ((char*)s1);
	while (s1[i] != '\0' && i < n)
	{
		k = 0;
		while (to_find[k] == s1[i + k] && i + k < n)
		{
			if (to_find[k++ + 1] == '\0')
				return ((char*)s1 + i);
		}
		i++;
	}
	return (0);
}
