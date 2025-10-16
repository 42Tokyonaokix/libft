/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:09 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 06:57:33 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned const char	*p;
	size_t				count;

	p = (unsigned const char *)b;
	count = 0;
	while (count < len)
	{
		if (p[count] == (unsigned char)c)
			return ((void *)&p[count]);
		count++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char *str = "hello";
//	printf("%p\n", ft_memchr(str, 'h', 5));
//	printf("%p\n", memchr(str, 'h', 5));
//	printf("%p\n", ft_memchr(str, 'h', 0));
//	printf("%p\n", ft_memchr(str, 'h', 0));
//	printf("%p\n", ft_memchr(str, 'c', 7));
//	printf("%p\n", memchr(str, 'c', 7));
//}

//You cant avoid segfo because of this function rule.
