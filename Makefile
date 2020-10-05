# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2020/10/06 07:10:57 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= gcc
CFLAGS			:= -Wall -Werror -Wextra
SRCNAME			:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
				   ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
				   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				   ft_toupper.c ft_tolower.c
SRCDIR			:= .
SRCS			:= $(addprefix $(SRCDIR)/,$(SRCNAME))
OBJNAME			:= $(SRCNAME:%.c=%.o)
OBJDIR			:= $(SRCDIR)
OBJS			:= $(addprefix $(OBJDIR)/,$(OBJNAME))
HEADERNAME		:= libft.h
HEADERDIR		:= .
HEADERS			:= $(addprefix $(HEADERDIR)/,$(HEADERNAME))
OUTPUTNAME		:= libft.a
OUTPUTDIR		:= .
OUTPUTS			:= $(addprefix $(OUTPUTDIR)/,$(OUTPUTNAME))
TESTDIR			:= .
TESTNAME		:= test.out
TESTSRCNAME		:= test.c
TESTINCLUDENAME	:= test_memset.c test_bzero.c test_memcpy.c test_memccpy.c test_strlen.c test_strlcpy.c test_strlcat.c test_strncmp.c test_isxxx.c test_toxxx.c
TESTS			:= $(addprefix $(TESTDIR)/,$(TESTNAME))
TESTSRCS		:= $(addprefix $(TESTDIR)/,$(TESTSRCNAME))
TESTINCLUDES	:= $(addprefix $(TESTDIR)/,$(TESTINCLUDENAME))

.SUFFIXES:		.o .c

.PHONY:			all
all:			$(OUTPUTNAME)

$(OUTPUTNAME):	$(OBJS) $(HEADERS)
				ar cr $(OUTPUTS) $(OBJS)

.c.o:
				$(CC) $(CFLAGS) -I$(HEADERDIR) -c $< -o $(patsubst %.c,%.o,$<)

.PHONY:			clean
clean:
				rm -f $(OBJS)

.PHONY:			fclean
fclean:			clean
				rm -f $(OUTPUTS)

.PHONY:			re
re:				fclean all

$(TESTNAME):	$(OUTPUTS) $(TESTSRCS) $(TESTINCLUDES) $(OUTPUTNAME)
				rm -f $(TESTS)
				$(CC) $(CFLAGS) $(TESTSRCS) $(addprefix -include ,$(TESTINCLUDES)) -L. -lft -o $(TESTS)

.PHONY:			debug
debug:
				$(warning OBJS = $(OBJS))
				$(warning SRCS = $(SRCS))
				$(warning OUTPUTS = $(OUTPUTS))
