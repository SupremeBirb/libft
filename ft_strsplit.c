/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:03:22 by lelee             #+#    #+#             */
/*   Updated: 2019/08/09 18:16:42 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	int		letters;
	int		x;

	if (!s)
		return (NULL);
	if (!(str = (char **)ft_memalloc((ft_numwords(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	x = -1;
	while (s[i])
		if (s[i] == c)
			i++;
		else
		{
			letters = ft_count_letters(&s[i], c);
			str[++x] = ft_strsub(s, i, letters);
			i += letters;
		}
	return (str);
}
