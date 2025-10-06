#include "../includes/libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*itoa;

	itoa = ft_itoa(n);
	ft_putstr_fd(itoa, fd);
}

//int main(void)
//{
//	int	fd;
	
//	fd = open("test1", O_WRONLY);
//	ft_putnbr_fd(12345,fd);
//}