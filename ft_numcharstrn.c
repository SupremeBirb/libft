/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcharstrn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:15:37 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/13 16:20:31 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numcharstrn(const char *str, int tofind, int n)
{
	int numchar;
	int i;

	numchar = 0;
	i = -1;
	if (!str || !tofind || !n)
		return (0);
	while (--n >= 0)
		if (str[++i] == (char)tofind)
			numchar++;
	return (numchar);
}
