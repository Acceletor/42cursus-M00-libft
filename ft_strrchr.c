/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:49:18 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:08 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pos;

	pos = (char *)s;
	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c)
			pos = (char *)s + i;
		i++;
	}
	if (pos == (char *)s)
		return (0);
	return (pos);
}

//int main() {
//    const char str[] = "Hello, World!";
//    char target = 'o';
//
//    char *result = ft_strrchr(str, target);
//    if (result) {
//        printf("Found '%c' at position: %ld\n", target, result - str);
//    } else {
//        printf("Character '%c' not found.\n", target);
//    }
//
//    return 0;
//}