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
			

HEADER	=	libft.h

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re : fclean all

.PHONY : all clean fclean re