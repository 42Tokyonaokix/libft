#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	long long int	lnb;
	void			*ptr;

	lnb = nmemb * size;
	if (lnb == 0)
		return (NULL);
	ptr = malloc(lnb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, lnb);
	return (ptr);
}

//int main(int argc, char **argv)
//{
//	printf ("%p\n", ft_calloc(2, 0));
//	(void)argc;
//	(void)argv;
//}