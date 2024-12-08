#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    int i;

    if (s == NULL)
        return (NULL);
    if (start > ft_strlen(s))
    {
        if ((sub = malloc(sizeof(char))) == NULL)
            return (NULL);
        sub[0] = 0;
        return (sub);
    }
    if ((start + len) > ft_strlen(s))
        len = ft_strlen(s) - start;
    if ((sub = malloc(len + 1))== NULL)
        return (NULL);
    i = 0;
    while(i < (int)len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = 0;
    return (sub);
}

//int	main(void)
//{
//	char *s = "Hello, World!";
//	char *sub;
//
//	// Case: Normal substring
//	sub = ft_substr(s, 7, 5);
//	if (sub)
//	{
//		printf("Substring: '%s'\n", sub); // Output: "World"
//		free(sub);
//	}
//
//	// Case: Start beyond string length
//	sub = ft_substr(s, 14, 5);
//	if (sub)
//	{
//		printf("Substring: '%s'\n", sub); // Output: ""
//		free(sub);
//	}
//
//	// Case: len greater than remaining string
//	sub = ft_substr(s, 7, 50);
//	if (sub)
//	{
//		printf("Substring: '%s'\n", sub); // Output: "World!"
//		free(sub);
//	}
//
//	return (0);
//}