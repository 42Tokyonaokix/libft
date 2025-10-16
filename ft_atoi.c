/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:48:08 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 10:26:39 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	count;
	int		number;
	int		neg;

	count = 0;
	neg = 1;
	while (nptr[count] == ' ' || (9 <= nptr[count] && nptr[count] <= 13))
		count++;
	if (nptr[count] == '+')
		count++;
	else if (nptr[count] == '-')
	{
		neg = -1;
		count++;
	}
	number = 0;
	while ('0' <= nptr[count] && nptr[count] <= '9')
	{
		number =  number * 10 + (nptr[count] - '0');
		count++;
	}
	return (number * neg);
}

int	main(void)
{
	printf("%d\n", atoi("0"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", atoi("10"));
	printf("%d\n", ft_atoi("10"));
	printf("%d\n", atoi("-1"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", atoi("\t\n\v\f\r 42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("%d\n", atoi("\t\n\v\f\r -42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r -42"));
	printf("%d\n", atoi("\t\n\v\f\r +42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +42"));
	printf("%d\n", atoi("\t\n\v\f\r +-42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +-42"));
	printf("%d\n", atoi("\t\n\v\f\r a-42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r a-42"));
	printf("%d\n", atoi("\t\n\v\f\r -42 42"));
	printf("%d\n", ft_atoi("\t\n\v\f\r -42 42"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483649"));
	printf("%d\n", ft_atoi("-2147483649"));
}
