# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnotch <tnotch@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/30 21:30:15 by tnotch            #+#    #+#              #
#    Updated: 2020/11/12 12:06:08 by tnotch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =   ft_atoi.c \
        ft_bzero.c \
		ft_calloc.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_memchr.c \
		ft_memcmp.c \
        ft_memcpy.c \
		ft_memccpy.c \
        ft_memmove.c \
        ft_memset.c \
        ft_strchr.c \
        ft_strdup.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c 		

BONUS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstdelone.c \
		ft_lstmap.c 
	

GCC = gcc

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

BOBJ = $(BONUS:.c=.o)

NAME = libft.a

RM   =  rm -f

.c.o:
	$(GCC) $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
		ar rc $(NAME) $(OBJ)

bonus: $(OBJ) $(BOBJ) 
	ar rc $(NAME) $(OBJ) $(BOBJ)

clean: 
	$(RM) $(OBJ)
	$(RM) $(BOBJ)

fclean: clean
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re
