#include "get_next_line.h"

int			line_search(int fd, char **str, char **line)
{
	char *tmp;
	int newline;
	char *found;

	found = ft_strchr(str[fd], '\n');
	!(ft_strchr(str[fd], '\n')) ? newline = 0 : \
	(newline = (ft_strlen(str[fd]) - ft_strlen(found)));
	if (str[fd][newline] == '\n')
	{
		*line = ft_strsub(str[fd], 0, newline);
		tmp = ft_strdup(str[fd] + newline + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1]; 
	int ret; 
	char *tmp;
	static char *str[FD_LIMIT];

	if(fd < 0 || !line || read(fd, 0, 0) == -1 || fd > FD_LIMIT)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if(!str[fd])
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = tmp;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && str[fd] == NULL)
		return (0);
	return (line_search(fd, str, line));
}
	
