/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:58:48 by lelee             #+#    #+#             */
/*   Updated: 2019/07/29 19:01:40 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int i;

	i = ft_strlen(dest);
	while (*src != '\0')
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
