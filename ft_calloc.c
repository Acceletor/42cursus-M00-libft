/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:03:21 by ksuebtha          #+#    #+#             */
/*   Updated: 2024/12/11 15:04:08 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;

	res = malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, count * size);
	return (res);

}

//#include <stdlib.h>
//int main() {
//    int *arr;
//    size_t num_elements = 5;
//
//    // Allocate memory for 5 integers
//    arr = (int *)ft_calloc(num_elements, sizeof(int));
//    if (arr == NULL) {
//        printf("Memory allocation failed\n");
//        return 1;
//    }
//
//    // Print initialized values
//    for (size_t i = 0; i < num_elements; i++) {
//        printf("arr[%zu] = %d\n", i, arr[i]);
//    }
//
//    // Free allocated memory
//    free(arr);
//
//    return 0;
//}