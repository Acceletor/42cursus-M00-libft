#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}

//int main()
//{
//    char buffer[50]; // Create a buffer to test memset
//     size_t i;
//
//     // Initialize the buffer with some known values
//     for (i = 0; i < sizeof(buffer); i++) {
//         buffer[i] = '.';
//     }
//     buffer[sizeof(buffer) - 1] = '\0'; // Null-terminate the buffer for display purposes
//
//     printf("Before bzero: ");
//     for (i = 0; i < sizeof(buffer); i++) {
//         printf("%i ",buffer[i]);
//     }
//    printf("\n");
//     // Call memset to fill the first 10 bytes with '*'
//     ft_bzero(buffer, 10);
//
//     printf("After: ");
//     for (i = 0; i < sizeof(buffer); i++) {
//         printf("%i ",buffer[i]);
//     }
//    printf("\n");
//    return 0;
//}