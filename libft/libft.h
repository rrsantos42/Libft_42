/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:18:59 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/11 20:55:16 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t n, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putstr_fd(char const *str, int fd);
void	*ft_memchr(const void *s1, int c, size_t n);
void	*ft_memset(void *s1, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		ft_atoi(const char *str);
int		ft_isalnum(int x);
int		ft_isalpha(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(char const *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

char	*ft_itoa(int num);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(char const *str, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strncat(char *dest, const char *src, size_t size);
char	*ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_substr(char const *s, size_t start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *s1, const char *to_find, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif