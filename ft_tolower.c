#include "libft.h"

int ft_tolower(int c)
{
    if ( (char)c >= 'A' && (char)c <= 'Z')
        return (c + 32);
       return (c);
}

//int main() {
//
//    printf("%c\n", ft_tolower('9'));
//    printf("%c\n", ft_tolower('W'));
//
//    return 0;
//}