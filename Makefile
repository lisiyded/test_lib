# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spowers <spowers@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 03:52:12 by spowers           #+#    #+#              #
#    Updated: 2020/05/24 22:10:56 by spowers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
       ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
       ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
       ft_itoa.c ft_len_itoa.c \
       ft_split.c ft_strndup.c ft_cntwrd.c \
       ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS =  $(BONUS:.c=.o)

INCLUDES = libft.h
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean 
	@rm -f $(NAME)

%.o: %.c $(INCLUDES)/libft.h
	gcc $(FLAGS) -c $? -o $@ -I$(INCLUDES)

re: fclean all 

bonus: $(BONUS_OBJS) $(OBJS)
	@ar rc $(NAME) $(OBJS_OBJS)
	@ranlib $(NAME)

.PHONY: all clean fclean re


