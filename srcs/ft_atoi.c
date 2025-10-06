#include "../includes/libft.h"

int ft_atoi(const char *nptr)
{
    size_t  count;
    int     number;
    int     neg;

    count = 0;
    while (nptr[count] == ' ' || (9 <=nptr[count] && nptr[count] <= 13))
        count++;
    if (nptr[count] == '+')
        count++;
    neg = 1;
    if (nptr[count] == '-')
    {
        neg = -1;
        count++;
    }
    number = 0;
    while ('0' <= nptr[count] && nptr[count] <= '9')
    {
        number = number * 10 + (nptr[count] - '0');
        count++;
    }
    return (number * neg);
} 