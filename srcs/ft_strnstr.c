#include "../includes/libft.h"

static int ft_strs2cmp(const char *s1, const char *s2)
{
    size_t  count;
	size_t	len;

	len = ft_strlen(s2);
	if (len == 0)
		return(0);
    count = 0;
    while (s1[count] && s1[count] == s2[count] && count < len - 1)
        count++;
    return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t count;
	
	count = 0;
	while (*big && count < len)
	{
		if (ft_strs2cmp(big, little) == 0)
			return ((char *)big);
		big++;
		count++;
	}
	return (NULL);
}