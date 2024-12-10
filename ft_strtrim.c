#include "libft.h"

static int is_in_set(char c, const char *set)
{
    size_t i = 0;
    while (set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *trimmed;

    if (!s1 || !set)
        return (0);
    start = 0;
    while(s1[start] && is_in_set(s1[start],set))
        start++;
    end = 0;
    while(s1[end])
        end++;
    while(end > start && is_in_set(s1[end - 1], set))
        end--;
    trimmed = (char*)malloc((end - start + 1) * sizeof(char));
    if(!trimmed)
        return (0);
    i = 0;
    while(start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = 0;
    return (trimmed);
}

//int main(void)
//{
//    char *result;
//
//    result = ft_strtrim("123secret124123", "123");
//    printf("Test 1: %s\n", result);
//    free(result);
//
//    result = ft_strtrim("abcHelloabc", "abc");
//    printf("Test 2: %s\n", result); // Expected: "Hello"
//    free(result);
//
//    result = ft_strtrim("Hello", "");
//    printf("Test 3: %s\n", result); // Expected: "Hello"
//    free(result);
//
//    result = ft_strtrim("     ", " ");
//    printf("Test 4: %s\n", result); // Expected: ""
//    free(result);
//
//    result = ft_strtrim(NULL, "abc");
//    printf("Test 5: %s\n", result ? result : "NULL"); // Expected: "NULL"
//
//    result = ft_strtrim("Hello", NULL);
//    printf("Test 6: %s\n", result); // Expected: "Hello"
//    free(result);
//
//    return (0);
//}