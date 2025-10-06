#include "../includes/libft.h"

static char	*digit_allocate(int n, char *itoa, size_t index);

char	*ft_itoa(int n)
{
	size_t				n_digit;
	long long int		temp;
	char				*itoa;

	temp = n;
	n_digit = 1;
	if (temp < 0)
	{
		temp = -temp;
		n_digit++;
	}
	while (temp >= 10)
	{
		n_digit++;
		temp = temp / 10;
	}
	itoa = (char *)malloc(sizeof(char) * (n_digit + 1));
	if (itoa == NULL)
		return (NULL);
	itoa = digit_allocate(n,  itoa, n_digit);
	return (itoa);
}

static char	*digit_allocate(int n, char *itoa, size_t index)
{
	if (n == INT_MIN)
		return("-2147483648\0");
	if (n == 0)
		return("0");
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	itoa[index] = '\0';
	while (n > 0)
	{
		index--;
		itoa[index] = n % 10 + '0';
		n = n / 10;
	}
	return (itoa);
}
//int main(void)
//{
//	printf("%s\n", ft_itoa(10));
//	printf("%s\n", ft_itoa(1));
//	printf("%s\n", ft_itoa(0));
//	printf("%s\n", ft_itoa(-10));
//	printf("%s\n", ft_itoa(INT_MAX));
//	printf("%s\n", ft_itoa(INT_MIN));
//}