# This is an example Makefile for a countwords program.  This
# program uses both the scanner module and a counter module.
# Typing 'make' or 'make count' will create the executable file.

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEAD = libft.h
NAME = libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_tolower.c \
		\
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		\
		ft_strcmp.c \
		ft_iscntrl.c \
		ft_isgraph.c \
		ft_isxdigit.c \
		ft_isspace.c \
		ft_strstr.c

BONUS =

# define the C object files
#
# This uses Suffix Replacement within a macro:
#   $(name:string1=string2)
# For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .c of all words in the macro SRCS
# with the .o suffix

OBJS = $(SRCS:.c=.o)

# typing 'make' will invoke the first target entry in the file
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
# The following part of the makefile is generic; it can be used to
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'

$(NAME): $(OBJS)
	ar rcs $@ $^

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file)
# (see the gnu make manual section about automatic variables)

.c.o : $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

bonus: $(NAME) $(BONUS)
	ar rcs $^

so:
	$(CC) -fPIC $(CFLAGS) -c $(SRCS)
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS) *~

fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY: clean fclean re all bonus
