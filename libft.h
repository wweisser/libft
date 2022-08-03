/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:02:48 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 14:41:20 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

struct s_list
{
	void			*content;
	struct s_list	*next;
};
typedef struct	s_list	t_list;

int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *c);
int				ft_atoi(const char *str);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_lstsize(t_list *lst);
size_t			ft_strlcpy(char *dst, const char *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
void			*ft_memset(void *c, int replace, unsigned int n);
void			ft_bzero(void *buf, size_t n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
void			*ft_memchr(void *buf, int ch, unsigned int n);
void			*ft_calloc(size_t count, size_t size);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_substr(char const *s, size_t start, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			**ft_split(char const *s, char c);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

int				print_str(char *str);
int				print_b10numb(long b10numb);
int				print_b10int(int b10int);
int				print_usb10numb(unsigned long usb10numb);
int				print_char(char c);

int				ft_printf(const char *str, ...);
int				selct(va_list ap, char c);
int				print_vpoint(void *pointer);
#endif
