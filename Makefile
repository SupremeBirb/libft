# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lelee <lelee@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 08:42:35 by lelee             #+#    #+#              #
#    Updated: 2019/09/02 04:24:18 by lelee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Marcos
CC = @gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_islower.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strlcat.c \
			ft_putchar.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_is_space.c \
			ft_strtrim.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_numwords.c \
			ft_count_letters.c \
			ft_strsplit.c \
			ft_putnbr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_num_digits.c \
			ft_itoa.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_memccpy.c \
			ft_strncmp.c \
			ft_iswhitespace.c \
			ft_delete_list.c \
			ft_multi_string_array.c \
			ft_numcharstrn.c \
			get_next_line.c \
			

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "compilation complete"

clean: 
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re