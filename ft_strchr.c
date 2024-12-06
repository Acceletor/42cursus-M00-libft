#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == 0)
        return ((char *)s + ft_strlen(s));
    while(s[i])
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    return (0);
}



//int main()
//{
//    const char str[] = "Hello, World!";
//    char target = '\0';
//
//    char *result = ft_strchr(str, target);
//    if (result)
//        printf("Found '%c' at position: %ld\n", target, result - str);
//    else
//        printf("Character '%c' not found.\n", target);
//
//    return 0;
//}
