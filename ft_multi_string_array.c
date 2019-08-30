/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multi_string_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:53:12 by lelee             #+#    #+#             */
/*   Updated: 2019/08/29 17:53:19 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*one_dim(int size)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = ft_strnew((size_t)size)))
		return (NULL);
	str[size--] = '\0';
	return (str);
}

char		**multi_dim(int size)
{
	char	**grid;
	int		i;

	if (!(grid = (char **)ft_memalloc((size + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	while (++i < size)
		grid[i] = one_dim(size);
	return (grid);
}
