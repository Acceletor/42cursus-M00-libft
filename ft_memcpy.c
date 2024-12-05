#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
//    if (!dest || !src)
//        return (NULL);
    while(i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}

//#include <string.h>
//int main()
//{
//    char src[] = "Hello, World!";
//    char dest[20];
//
//    // Copy the content of src to dest
//    ft_memcpy(dest, src, strlen(src) + 1); // +1 to include the null terminator
//
//    // Print the copied string
//    printf("Source: %s\n", src);
//    printf("Destination: %s\n", dest);
//
//    return 0;
//}


