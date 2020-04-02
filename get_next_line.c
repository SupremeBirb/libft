/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 12:40:07 by lelee             #+#    #+#             */
/*   Updated: 2019/09/02 04:33:25 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_line(char **str, int fd, char **line, int ret)
{
	char	*tmp;
	int		len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '\0')
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		tmp = ft_strdup(str[fd] + len + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char *str[FD_LIMIT];

	GNL_MACRO;
	if (fd < 0 || !line || fd > FD_LIMIT || read(fd, 0, 0) == -1)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if ((ret == 0 && str[fd] == NULL))
		return (0);
	return (ft_line(str, fd, line, ret));
}

/*
** int			main(int ac, char **av)
** {
** 	int		fd;
** 	char	*str;
** 	int		tst**
** 	if (ac != 2)
** 	{
** 		ft_putendl("Usage: ./gnl filename");
** 		return (0);
** 	}
** 	fd = open(av[1], O_RDONLY);
** 	while ((tst = get_next_line(fd, &str)) > 0)
** 	{
** 		printf("String: %s\n", str);
** 		free(str);
** 	}
** 	close(fd);
** 	return (0);
** }
*/

/*
** 	read:
** 	-   From the file indicated by the file descriptor fd, the read() function
** 		reads cnt bytes of input into the memory area indicated by buf. A
** 		successful read() updates the access time for the file.
**
** 	Syntax in C language
** 		--- size_t read (int fd, void* buf, size_t cnt);
**
** 	Parameters
** 		- fd: file descripter
** 		- buf: buffer to read data from
** 		- cnt: length of buffer
**
** 	Returns: How many bytes were actually read
** 		- return Number of bytes read on success
** 		- return 0 on reaching end of file
** 		- return -1 on error
** 		- return -1 on signal interrupt
**
** 	Important points:
** 	- 	buf needs to point to a valid memory location with length not
**		smaller than the specified size because of overflow.
**
** 	-	fd should be a valid file descriptor returned from open() to
**		perform read operation because if fd is NULL then read
**		should generate error.
**
** 	- 	cnt is the requested number of bytes read, while the return value
**		is the actual number of bytes read. Also, some times read system call
**		should read less bytes than cnt.
*/
