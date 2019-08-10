/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:05:36 by lelee             #+#    #+#             */
/*   Updated: 2019/08/07 21:24:43 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	// char		*ft_strtrim(char const *s)
**	// {
**	// 	char	*str;
**	// 	int		start_space;
**	// 	int		end_space;
**	// 	int		j;
**
**	// 	if (!s)
**	// 		return (NULL);
**	// 	start_space = 0;
**	// 	end_space = ft_strlen(s) - 1;
**	// 	j = -1;
**	// 	if (end_space < 1)
**	// 		return (ft_strdup(""));
**	// 	while (s[start_space] && ft_is_space(s[start_space]) == 1)
**	// 		start_space++;
**	// 	while (end_space > 0 && ft_is_space(s[end_space]) == 1)
**	// 		end_space--;
**	// 	if (start_space >= end_space)
**	// 		return (ft_strdup(""));
** if (!(str = (char *)malloc(sizeof(char) * (end_space - start_space) + 1)))
**	// 		return (NULL);
**	// 	while (start_space <= end_space)
**	// 		str[++j] = s[start_space++];
**	// 	str[j] = '\0';
**	// 	return (str);
**	// }
*/

char		*ft_strtrim(char const *s)
{
	char	*fresh;
	int		start_fresh;
	int		end_fresh;
	int		j;

	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	start_fresh = 0;
	end_fresh = ft_strlen(s);
	while (s[start_fresh] && ft_is_space(s[start_fresh]) == 1)
		start_fresh++;
	while (end_fresh > 0 && ft_is_space(s[end_fresh - 1]) == 1)
		end_fresh--;
	if (end_fresh <= start_fresh)
		return (ft_strdup(""));
	if (!(fresh = (char*)malloc(sizeof(char) * (end_fresh - start_fresh) + 1)))
		return (NULL);
	j = 0;
	while (start_fresh < end_fresh)
		fresh[j++] = s[start_fresh++];
	fresh[j] = '\0';
	return (fresh);
}

/*
**	// static int	is_whitespace(char c)
**	// {
**	// 	if (c == ' ' || c == '\n' || c == '\t')
**	// 		return (1);
**	// 	return (0);
**	// }
**
**	// char		*ft_strtrim(char const *s)
**	// {
**	// 	size_t	start;
**	// 	size_t	len;
**	// 	char	*new;
**
**	// 	if (!s)
**	// 		return (NULL);
**	// 	start = 0;
**	// 	len = ft_strlen(s);
**	// 	while (is_whitespace(s[start]))
**	// 		start++;
**	// 	if (len)
**	// 		while (is_whitespace(s[len - 1]) && (start < len))
**	// 			len--;
**	// 	if (start <= len)
**	// 		if ((new = ft_strsub(s, start, len - start)))
**	// 			return (new);
**	// 	return (NULL);
**	// }
*/
