#include "../includes/libft.h"

void std_move(void *dest, const void *src, size_t n);
void rev_move(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (n > ft_strlen(src))
		return (NULL);
	if (dest < src)
		std_move(dest, src, n);
	if (src < dest)
		rev_move(dest, src, n);
	return (dest);
}

void std_move(void *dest, const void *src, size_t n)
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
}

void rev_move(void *dest, const void *src, size_t n)
{
	unsigned  char	*pdest;
	unsigned  char	*psrc;

	pdest = (unsigned  char *)dest;
	psrc = (unsigned  char *)src;
	while (n > 0)
	{
		n--;
		pdest[n] = psrc[n];
	}
}