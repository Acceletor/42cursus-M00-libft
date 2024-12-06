/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:45:50 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/12/03 15:26:37 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for read(), write()....
#include <stdio.h>

int		ft_isalpha(int ch);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int i);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);