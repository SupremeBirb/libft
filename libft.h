/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 08:42:55 by lelee             #+#    #+#             */
/*   Updated: 2019/08/08 18:41:36 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** /Header file dependencies
*/

# include <stdlib.h>
# include <unistd.h>

/*
** List
*/

typedef struct	s_list
{
	void					*content;
	size_t				content_size;
	struct s_list	*next;
}								t_list;

/*
** Functions **********************************************
*/

/*
** Strings
*/

size_t		ft_strlen(const char *str);
char			*ft_strdup(char *str);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strstr(char const *s1, char const *to_find);
char			*ft_strnstr(char const *s1, char const *to_find, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_strsplit(char const *s, char c);
char			*ft_strtrim(char const *s);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char			**multi_dim(int size);
char			*one_dim(int size);

/*
** Supportive/Checkers
*/

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
size_t		ft_is_space(char c);
int				ft_numwords(char const *s, char c);
int				ft_count_letters(char const *s, char c);
int				ft_num_digits(int len, int check);
int				ft_iswhitespace(char c);

/*
** Number Conversion
*/

int				ft_atoi(const char *str);
char			*ft_itoa(int n);

/*
** Memory
*/

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);

/*
** Input/Output
*/

void			ft_putchar(int c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);

/*
** Linked Lists
*/

t_list		*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
