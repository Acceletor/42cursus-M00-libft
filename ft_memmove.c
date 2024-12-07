#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    if (!dst || !src)
        return (NULL);
    i = 0;
    if (dst > src)
    {
        while (len--)
        {
            ((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    else
    {
        while(len--)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return(dst);
}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char buffer[20] = "abcdef";
//
//    // Overlapping memory: copying src to a region within itself
//    ft_memmove(buffer + 2, buffer, 4);
//    printf("Result: %s\n", buffer); // Output: "ababcd"
//
//    return 0;
//}