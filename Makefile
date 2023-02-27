# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 17:47:59 by almeliky          #+#    #+#              #
#    Updated: 2023/02/27 17:48:07 by almeliky         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_bzero.c		ft_isalnum.c	ft_isalpha.c\
			ft_isascii.c	ft_isdigit.c	ft_isprint.c\
			ft_memcpy.c		ft_memmove.c	ft_memset.c\
			ft_strlcat.c	ft_strlcpy.c	ft_strlen.c\
			ft_toupper.c	ft_tolower.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
			ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
			ft_calloc.c		ft_strdup.c		ft_substr.c\
			ft_strjoin.c	ft_strtrim.c	ft_split.c\
			ft_itoa.c		ft_strmapi.c	ft_striteri.c\
			ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c\
			ft_putnbr_fd.c\

SRCS_b	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c\
			
HEADER	=	./

OBJS	=	$(SRCS:%.c=%.o)

OBJS_b	=	$(SRCS_b:%.c=%.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: ${OBJS_b}
	ar rcs ${NAME} ${OBJS_b}

clean:
	rm -rf $(OBJS) $(OBJS_b)

fclean:
	rm -rf $(OBJS) $(OBJS_b) $(NAME)

re : fclean all bonus

.PHONY : all clean bonus fclean re