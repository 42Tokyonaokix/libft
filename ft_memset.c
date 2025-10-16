/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:22 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 07:16:10 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return ((void *)p);
}

//int	main(void)
//{
//	char buffer1[10] = "abcdef";
//	memset(buffer1, '0', 2);
//	char buffer2[10] = "abcdef";
//	ft_memset(buffer2,'0', 2);
//	printf("%c\n", buffer1[0]);
//	printf("%c\n", buffer2[0]);
//	printf("%c\n", buffer1[1]);
//	printf("%c\n", buffer2[1]);
//	printf("%c\n", buffer1[2]);
//	printf("%c\n", buffer2[2]);
//	char buffer3[10] = "abcdef";
//	memset(buffer3, '0', 0);
//	char buffer4[10] = "abcdef";
//	ft_memset(buffer4,' 0', 0);
//	printf("%c\n", buffer3[0]);
//	printf("%c\n", buffer4[0]);
//	printf("%c\n", buffer3[1]);
//	printf("%c\n", buffer4[1]);
//	printf("%c\n", buffer3[2]);
//	printf("%c\n", buffer4[2]);
//}
