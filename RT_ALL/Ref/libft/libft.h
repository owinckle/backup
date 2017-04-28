/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirtel <dbirtel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 08:55:00 by dbirtel           #+#    #+#             */
/*   Updated: 2017/04/10 09:42:08 by dbirtel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

# define BUFF_SIZE 10

typedef struct		s_save
{
	int				fd;
	char			*str;
}					t_save;

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					ft_atoi(char const *str);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isdigit(int c);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_isspace(char c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_intlen(int nbr);
double				ft_pow(double nbr, size_t pow);
double				ft_atof(char *str);
size_t				ft_strlen(char const *str);
size_t				ft_strlcat(char *dest, char const *src, size_t size);
void				ft_lstaffstr(t_list **lst);
void				ft_lstpushback(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				*ft_memset(void *b, int c, size_t len);
void				ft_striter(char *s, void (*f)(char *));
void				ft_putchar(char c);
void				*ft_memalloc(size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_bzero(void *s, size_t n);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *str, int fd);
void				ft_strclr(char *str);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_strdel(char **as);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t len);
void				ft_memdel(void **ap);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strncpy(char *dest, char const *src, size_t n);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_itoa(int nbr);
char				*ft_strdup(char const *str);
char				*ft_strncat(char *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s);
char				*ft_strnstr(char const *s1, char const *s2, size_t len);
char				*ft_strstr(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_trimc(char const *str, char c);
char				*ft_strndup(char const *s, size_t len);
char				*ft_strchr(char const *s, int c);
char				*ft_strrchr(char const *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtoupper(char *str);
char				*ft_strtolower(char *str);
char				*ft_strjoinc(char *s, char c);

#endif
