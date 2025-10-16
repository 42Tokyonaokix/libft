/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:12 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 08:50:00 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*p1;
	unsigned const char	*p2;
	size_t				count;

	p1 = (unsigned const char *)s1;
	p2 = (unsigned const char *)s2;
	count = 0;
	while (count < n)
	{
		if (p1[count] != p2[count])
			return (p1[count] - p2[count]);
		count++;
	}
	return (0);
}

//int	main(void)
//{
//	char	*s1 = "hello";
//	char	*s2 = "world";
//	char	*s3 = "hello";
//	char	*s4 = "hella";
//	char	*s5 = "あella";

//	printf("%d\n", ft_memcmp(s1, s2, 0));
//	printf("%d\n", memcmp(s1, s2, 0));
//	printf("%d\n", ft_memcmp(s1, s2, 5));
//	printf("%d\n", memcmp(s1, s2, 5));
//	printf("%d\n", ft_memcmp(s1, s3, 5));
//	printf("%d\n", memcmp(s1, s3, 5));
//	printf("%d\n", ft_memcmp(s1, s4, 5));
//	printf("%d\n", memcmp(s1, s4, 5));
//	printf("%d\n", ft_memcmp(s1, s4, 4));
//	printf("%d\n", memcmp(s1, s4, 4));
//	printf("%d\n", ft_memcmp(s1, s5, 4));
//	printf("%d\n", memcmp(s1, s5, 4));
//}
