#include "../includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t len)
{
    size_t  count;

    count = 0;
    while (s1[count] && s1[count] == s2[count] && count < len -1)
        count++;
    return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}