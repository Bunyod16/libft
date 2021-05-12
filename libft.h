/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:50:05 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/12 12:16:59 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_atoi(const char *str);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
size_t			ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
void			*ft_memset(void *b, int c, size_t len);
#endif
