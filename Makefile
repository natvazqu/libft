# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:32:50 by natvazqu          #+#    #+#              #
#    Updated: 2023/10/20 22:02:54 by natvazqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CÓDIGOS DE COLOR
CLR_BLACK=\033[0;30m
CLR_RED=\033[0;31m
CLR_GREEN=\033[0;32m
CLR_YELLOW=\033[0;33m
CLR_BLUE=\033[0;34m
CLR_PURPLE=\033[0;35m
CLR_CYAN=\033[0;36m
CLR_WHITE=\033[0;37m
CLR_END=\033[0m

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
CLEAN = rm -Rf

FILES = ft_atoi.c \
	 ft_bzero.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_memset.c \
	 ft_strchr.c \
	 ft_strlcat.c \
	 ft_strlcpy.c \
	 ft_strlen.c \
	 ft_strncmp.c \
	 ft_strnstr.c \
	 ft_strrchr.c \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_calloc.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_itoa.c \
	 ft_putendl_fd.c \
	 ft_striteri.c \
	 ft_strjoin.c \
	 ft_strmapi.c \
	 ft_substr.c \
	 ft_putnbr_fd.c \
	 ft_strdup.c \
	 ft_strtrim.c \
	 ft_split.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

MAIN = main.c
TEST = ft_tolower.c
LIBFTMAIN = libft
OBJS = $(FILES:.c=.o)
BOBJS = $(BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@
	@echo "$(CLR_BLUE)(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compiling, wait a few seconds...$(CLR_END)"
	@echo "$(CLR_GREEN)(•̀ᴗ•́)و $@ generated!$(CLR_END)"

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.PHONY: all clean fclean re

bonus:
	@$(CC) -c $(CFLAGS) $(BONUS)
	@echo "$(CLR_BLUE)(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compiling, wait a few seconds...$(CLR_END)"
	@echo "$(CLR_GREEN)(•̀ᴗ•́)و $@ generated!$(CLR_END)"
	ar rcs $(NAME) $(BOBJS)

clean:
	@$(CLEAN) ./*.o$
	@echo "$(CLR_YELLOW)¯\_(ツ)_/¯ All files clean!$(CLR_END)"

fclean: clean
	@$(CLEAN) ./*.o
	@$(CLEAN) ./*.a
	@echo "$(CLR_CYAN)(╯°□°）╯︵ ┻━┻ $(NAME) Removed! $(CLR_END)"

re: fclean all

ascii_art:

	@echo "                                                        ...'''...                                "
	@echo "                                                   .,coxkO000000Oxo;.                            "
	@echo "                                                 'lkKKKKKKKKKKKKKKKKkl;.                         "
	@echo "                                              ':d0KKKKKKKKKK000KKKKKKKKx;                        "
	@echo "                                             :kKKKKKKKKKOxl:;;;:lodk0KKK0c.                      "
	@echo "                                           .l0KKKKKKKKko;..........'o0KKK0:                      "
	@echo "                                          .l0KKKKKKKKx;.....';;'....,dKKKKo.                     "
	@echo "                                          :0KKKKKKKKxoo:,',:lc;'.....l0KKKo.                     "
	@echo "                                         .xKKKKKKKKk;.;;'''...   ...'dKXKKc                      "
	@echo "                                         :0KKKKKKKKl   .....     ...cOOkxd'                      "
	@echo "                                        .lKKKKKKKK0c..........  ...;llccl,                       "
	@echo "                                        .xKKKKKKKK0c..............,c;,cllc.                      "
	@echo "                                        .l0KKKKKKKKk;..............ldoldOd;.                     "
	@echo "                                       c0XKKKKKKKKk:.............;xKKKKKo.                       "
	@echo "                                      ;0XKKKKKKKXXKOd:,'........'oKXXKKKk'                       "
	@echo "                                     'kXKKKKKKKXXKKKK0kdc:;''''.;xXXXKKXKx'                      "
	@echo "                                     lKKKKKKKKKKKKKKKKXKK0d:,,',lOK0kxddk0k,                     "
	@echo "                                    .dXKKKKKKKKKKKKKKXKxol:,''';d0Ol;;,,,ckk'                    "
	@echo "                                     ;OXXKKKKKKKKKKXXNk;.',:;,,:xkc,,;;,',ok;                    "
	@echo "                                      c0KKKKKKKKKKKXNNXk:,',;:lo:,,,,,,''':;.                    "
	@echo "                                      .xKKKKKKKKKKKKXNNNXOkdlc,...'',,'....                      "
	@echo "                                 .'. .:OKKKKKKKKKKKKXNNNXOd:'.....'''''...                       "
	@echo "                                 .:odxkk0XKXXKKKKKKXNNKkc,'''''.....''...                        "
	@echo "                                  .,:;,,:lok0XXXXXXX0dc,,,,''''..':;.....                        "
	@echo "                                 ...'.''..'lOXXXK00Ooc;;;;,..';lx0Xx;;;.                         "
	@echo "                              .......',;:clk0xl:;;:cc;,,'',:okKNNNNX0d'                          "
	@echo "                            ...........  ..;:'.'',,,,'...,xXNNNNNNNKo.                           "
	@echo "                         ..........      ...'''....,:okKNNNNNNNNNk.                              "
	@echo "                      ...........     ......'';cldkKXNNNNNNNNNNNXc                               "
	@echo "                    ..........     ...'''.....c0KNNNNNNNNNNNNNNNK;                               "
	@echo "                   ......'''.    ....''....   ,d0NNNNNNNNNNNNNNN0;                               "
	@echo "                 .......'''.     ...''....    .ckNNNNNNNNNNNNNNNXc                               "
	@echo "                ... ....''.      .,'''''.     'lONNNNNNNNNNNNNNNNd.                              "
	@echo "                    .'....       ','''...     .:dKXXNNNNNNXXK0Okd:.                              "
	@echo "                    .'''..      .''''...         .',;:::;;,'...                                  "
	@echo "                   .',,,.       .,'''..                                                          "
	@echo "                   .';;,.       ',''..                                                           "
	@echo "                    .''.        .,''.                                                            "
