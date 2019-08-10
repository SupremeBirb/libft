/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 23:03:34 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 12:08:43 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*ch;
	int		i;

	ch = (char*)str;
	i = ft_strlen(ch);
	if ((char)c == '\0')
		return (ch + i);
	while (i--)
		if (ch[i] == c)
			return (ch + i);
	return (NULL);
}
