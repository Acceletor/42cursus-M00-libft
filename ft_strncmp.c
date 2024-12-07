#include "libft.h"

 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    size_t i;
    unsigned char c1;
    unsigned char c2;

    i = 0;
    while(i < n && (s1[i] || s2[i]))
    {
        c1 = (unsigned char)s1[i];
        c2 = (unsigned char)s2[i];
        if (c1 != c2)
            return (c1 - c2);
        i++;
    }
    return (0);
 }


//int main() {
//    printf("Test 1: %d\n", ft_strncmp("abc", "abd", 3));
//    printf("Test 2: %d\n", ft_strncmp("abc", "abc", 3));
//    printf("Test 3: %d\n", ft_strncmp("abc", "ab", 3));
//    printf("Test 4: %d\n", ft_strncmp("ab", "abc", 3));
//    printf("Test 5: %d\n", ft_strncmp("abc", "abd", 2));
//    printf("Test 5: %d\n", ft_strncmp("\200", "\0", 1));
//}

