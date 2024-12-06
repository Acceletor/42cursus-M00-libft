#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;
    size_t dst_len;
    size_t res;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    i = 0;

    if (dstsize > dst_len)
        res = dst_len + src_len;
    else
        res = src_len + dstsize;
    while(i < dstsize - dst_len - 1 && src[i] != 0)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = 0;

    return (res);
}
//
//int main()
//{
//    char dest[10] = "Hello";
//    char src[] = " World!";
//    size_t dest_size = sizeof(dest);
//
//    size_t result = ft_strlcat(dest, src, dest_size);
//
//    printf("Destination: %s\n", dest);
//    printf("Total length: %zu\n", result);
//
//    return 0;
//}