/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:28:05 by lelee             #+#    #+#             */
/*   Updated: 2019/08/06 01:23:14 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *str)
{
	int		i;
	char	*dupe;

	if (!(dupe = (char*)malloc(sizeof(*dupe) * (ft_strlen(str) + 1))))
		return (NULL);
	i = -1;
	while (str[++i] != '\0')
		dupe[i] = str[i];
	dupe[i] = '\0';
	return (dupe);
}
