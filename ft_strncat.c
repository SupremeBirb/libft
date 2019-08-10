/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:06:49 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 12:54:46 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	char	*s;

	s = (char *)src;
	i = ft_strlen(dest);
	k = -1;
	while (++k < n && src[k])
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
