#include "../includes/libft.h"

char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	count;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	count = 0;
	if (start > ft_strlen(s))
		return ("\0");
	while (count < len && s[count + start])
	{
		substr[count] = s[count + start];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}

//int main (void)
//{
//	printf("%s\n", substr("0123456789", 0, 5));
//	printf("%s\n", substr("0123456789", 5, 5));
//	printf("%s\n", substr("0123456789", 7, 5));
//	printf("%s\n", substr("0123456789", 10, 5));
//	printf("%s\n", substr("0123456789", 25, 30));
//	printf("%s\n", substr("0123456789", 5, 25));
//}