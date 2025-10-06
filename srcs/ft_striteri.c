#include "../includes/libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;	
	
	while (*s)
	{
		f(index, s);
		s++;
		index++;
	}
}

void to_upper_if_even(unsigned int i, char *c)
{
    if (i % 2 == 1)
        if ('A' <= *c && *c <= 'Z')
    		*c += 32;
}

//int main(void)
//{
//	char s[] = "ABCDEFG";
	
//	printf("%s\n", s);
//	ft_striteri(s, to_upper_if_even);
//	printf("%s\n", s);
//}