# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2020/10/06 21:10:19 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= gcc
CFLAGS			:= -Wall -Werror -Wextra
SRCNAME			:= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
				   ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c\
				   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c\
				   ft_toupper.c ft_tolower.c\
				   ft_atoi.c ft_calloc.c\
				   ft_substr.c
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
TESTINCLUDENAME	:= test_memset.c test_bzero.c test_memcpy.c test_memccpy.c test_memmove.c test_memchr.c test_memcmp.c test_strnstr.c test_strlen.c test_strlcpy.c test_strlcat.c test_strncmp.c test_strxchr.c test_strdup.c test_isxxx.c test_toxxx.c test_atoi.c test_calloc.c test_substr.c
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
