#include "../includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *latest;

	latest = NULL;
	while (*s && strchr(s, c))
	{
		latest = strchr(s, c);
		s++;
	}
	return (latest);
}