/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:21:36 by lelee             #+#    #+#             */
/*   Updated: 2019/08/06 00:52:43 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	*ch;
	int		i;

	ch = (char*)str;
	i = -1;
	if ((char)c == '\0')
		return (ch + ft_strlen(ch));
	while (ch[++i])
	{
		if (ch[i] == c)
			return (ch + i);
	}
	return (NULL);
}
