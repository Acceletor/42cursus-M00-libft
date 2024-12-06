#include "libft.h"

int ft_toupper(int c)
{
    if ( (char)c >= 'a' && (char)c <= 'z' )
        return (c - 32);
    return (c);

}

//int main() {
//
//    printf("%c\n", ft_toupper('9'));
//    printf("%c\n", ft_toupper('e'));
//
//    return 0;
//}
