#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;

	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[count] && count < dstsize -1)
	{
		dst[count] = src [count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}