# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnakano <dnakano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 08:47:29 by dnakano           #+#    #+#              #
#    Updated: 2020/10/05 15:39:07 by dnakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= gcc
CFLAGS			:= -Wall -Werror -Wextra
SRCNAME			:= ft_strlen.c ft_strlcpy.c
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
TESTINCLUDENAME	:= test_strlen.c test_strlcpy.c
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

$(TESTNAME):	$(OUTPUTS) $(TESTSRCS) $(TESTINCLUDES)
				$(CC) $(CFLAGS) $(TESTSRCS) $(addprefix -include ,$(TESTINCLUDES)) -L. -lft -o $(TESTS)

.PHONY:			debug
debug:
				$(warning OBJS = $(OBJS))
				$(warning SRCS = $(SRCS))
				$(warning OUTPUTS = $(OUTPUTS))
