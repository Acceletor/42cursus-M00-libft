#include "libft.h"

int ft_atoi(const char *str)
{
    char flag;
    int res;

    res = 0;
    while(*str == ' ')
        str++;
    if(*str == '-' || *str == '+')
    {
        flag = *str;
        str++;
    }
    while(ft_isdigit(*str))
    {
        res *= 10;
        res += *str - 48;
        str++;
    }
    if (flag == '-')
        return (res * -1);
    return (res);
}

//#include <stdlib.h>
//int main(){
//    char *str = "    1b2aa";
//    printf("%i\n", ft_atoi(str));
//    printf("%i\n", atoi(str));
//}