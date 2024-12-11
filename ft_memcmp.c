/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:06:23 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/12/11 15:07:36 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}


//int main() {
//    char buffer1[] = {1, 2, 3, 4, 5};
//    char buffer2[] = {1, 2, 0, 4, 5};
//    char buffer3[] = {1, 2, 3, 4, 5};
//
//    printf("Result 1: %d\n", ft_memcmp(buffer1, buffer2, 5)); // Should be > 0
//    printf("Result 2: %d\n", ft_memcmp(buffer1, buffer3, 5)); // Should be 0
//    printf("Result 3: %d\n", ft_memcmp(buffer1, buffer2, 2)); // Should be 0
//
//    return 0;
//}