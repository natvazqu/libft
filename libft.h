/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:55:11 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:31:41 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief This function converts the initial portion of the string pointed to
 * by str to int representation.
 * @param c
 * @return int
 */
int		ft_atoi(const char *c);
/**
 * @brief This function writes n zeroed bytes to the string s. If n is zero,
 * this function does nothing.
 * @param s
 * @param n
 * @return void
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief This function tests for any character for which isupper or
 * islower is true.
 * @param i
 * @return int
 */
int		ft_isalpha(int i);
/**
 * @brief This function tests for a decimal digit character.
 *
 * @param i
 * @return int
 */
int		ft_isdigit(int i);
/**
 * @brief This function tests for any character for which isalpha
 * or isdigit is true.
 * @param i
 * @return int
 */
int		ft_isalnum(int i);
/**
 * @brief This function tests for an ASCII character.
 * @param i
 * @return int
 */
int		ft_isascii(int i);
/**
 * @brief This function tests for any printing character.
 * @param i
 * @return int
 */
int		ft_isprint(int i);
/**
 * @brief This function locates the first occurrence of an specific
 * byte in a portion memory, and returns a pointer of it.
 *
 * @param s Pointer at block to search
 * @param c Byte you want to search
 * @param n Number of bytes you want to search
 * @return void*
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief This function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 * @param s1
 * @param s2
 * @param n
 * @return int
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param n
 * @return void*
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param len
 * @return void*
 */
void	*ft_memmove(void *dest, const void *src, size_t len);
/**
 * @brief
 *
 * @param b
 * @param c
 * @param len
 * @return void*
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief
 *
 * @param s
 * @param c
 * @return char*
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param destsize
 * @return size_t
 */
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
/**
 * @brief
 *
 * @param dest
 * @param src
 * @param destsize
 * @return size_t
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
/**
 * @brief
 *
 * @param s
 * @return size_t
 */
size_t	ft_strlen(const char *s);
/**
 * @brief
 *
 * @param str1
 * @param str2
 * @param n
 * @return int
 */
int		ft_strncmp(const char *str1, const char *str2, size_t n);
/**
 * @brief
 *
 * @param haystack
 * @param needle
 * @param len
 * @return char*
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/**
 * @brief
 *
 * @param s
 * @param c
 * @return char*
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief
 *
 * @param i
 * @return int
 */
int		ft_tolower(int i);
/**
 * @brief
 *
 * @param i
 * @return int
 */
int		ft_toupper(int i);

/**
 * @brief
 *
 * @param nitems
 * @param size
 * @return void*
 */
void	*ft_calloc(size_t nitems, size_t size);
/**
 * @brief
 *
 * @param str
 * @return char*
 */
char	*ft_strdup(const char *str);

/**
 * @brief
 *
 * @param c
 * @param fd
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief
 *
 * @param str
 * @param fd
 */
void	ft_putstr_fd(char *str, int fd);
/**
 * @brief
 *
 * @param str
 * @param start
 * @param len
 * @return char*
 */
char	*ft_substr(char const *str, unsigned int start, size_t len);
/**
 * @brief
 *
 * @param n
 * @return char*
 */
char	*ft_itoa(int n);
/**
 * @brief
 *
 * @param str
 * @param fd
 */
void	ft_putendl_fd(char *str, int fd);
/**
 * @brief
 *
 * @param n
 * @param fd
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief
 *
 * @param str
 * @param c
 * @return char**
 */
char	**ft_split(char const *str, char c);
/**
 * @brief
 *
 * @param str
 * @param f
 */
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
/**
 * @brief
 *
 * @param str1
 * @param str2
 * @return char*
 */
char	*ft_strjoin(char const *str1, char const *str2);
/**
 * @brief
 *
 * @param str
 * @param f
 * @return char*
 */
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
/**
 * @brief
 *
 * @param str
 * @param set
 * @return char*
 */
char	*ft_strtrim(char const *str, char const *set);

/**
 * @brief
 *
 * @param content
 * @return t_list*
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief
 *
 * @param lst
 * @param new
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief
 *
 * @param lst
 * @return int
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief
 *
 * @param lst
 * @return t_list*
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief
 *
 * @param lst
 * @param new
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief
 *
 * @param lst
 * @param del
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * @brief
 *
 * @param lst
 * @param del
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * @brief
 *
 * @param lst
 * @param f
 */
void	ft_lstiter(t_list *lst, void (*f)(void*));
/**
 * @brief
 *
 * @param lst
 * @param f
 * @param del
 * @return t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
