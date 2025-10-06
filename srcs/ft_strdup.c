#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	count;
	char	*dest;

	len = ft_strlen(str);
	if (len == 0)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	count = 0;
	while (str[count])
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

//int main(int argc, char **argv)
//{
//	printf ("%s\n", ft_strdup("a"));
//	(void)argc;
//	(void)argv;
//}