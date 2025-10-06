#include "../includes/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned  char	*pdest;
	unsigned  char	*psrc;
	size_t				count;

	pdest = (unsigned  char *)dest;
	psrc = (unsigned  char *)src;
	count = 0;
	while (psrc[count] && count < n)
	{
		pdest[count] = psrc[count];
		count++;
	}
	pdest[count] = '\0';
	return (pdest);
}