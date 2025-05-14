# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 17:13:58 by abroslav          #+#    #+#              #
#    Updated: 2025/04/29 18:22:25 by abroslav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilador
CC = cc
CFLAGS = -Wall -Wextra -Werror

#asrquivos
NAME = libft.a

#fontes e objs
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
        ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c \
        ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
        ft_strnstr.c ft_atoi.c ft_strdup.c ft_memcpy.c ft_memmove.c \
        ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_strjoin.c \
        ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
        ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c \


SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
       ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
       ft_lstmap_bonus.c 

OBJ = $(SRCS:.c=.o)

OBJB = $(SRCB:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#regra principal
all: $(NAME)

#criacao lib
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: .bonus

.bonus:	$(OBJ) $(OBJB)
	ar rcs $(NAME) $(OBJ) $(OBJB)
	touch .bonus

clean:
	rm -f $(OBJ)
	rm -f $(OBJB)
	rm -f .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
