/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:19 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 07:13:14 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	std_move(void *dest, const void *src, size_t n);
static void	rev_move(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		std_move(dest, src, n);
	if (src < dest)
		rev_move(dest, src, n);
	return (dest);
}

static void	std_move(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			count;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		pdest[count] = psrc[count];
		count++;
	}
}

static void	rev_move(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		pdest[n] = psrc[n];
	}
}

//int	main(void)
//{
//	char src[] = "hello";
//	char dest[10];
//	char dest1[10];
//	ft_memmove(dest, src, 0);
//	memmove(dest1, src, 0);
//	printf("%s\n", dest);
//	printf("%s\n", dest1);
//	ft_memmove(dest, src, 3);
//	memmove(dest1, src, 3);
//	printf("%s\n", dest);
//	printf("%s\n", dest1);

//	char src2[] = "hello";
//	char src3[] = "hello";
//	char *dest2 = src2 + 1;
//	char *dest3 = src3 + 1;
//	ft_memmove(dest2, src2, 3);
//	memmove(dest3, src3, 3);
//	printf("%s\n", src2);
//	printf("%s\n", src3);

//	char dest4[] = "hello";
//	char dest5[] = "hello";
//	char *src4 = dest4 + 1;
//	char *src5 = dest5 + 1;
//	ft_memmove(dest4, src4, 3);
//	memmove(dest5, src5, 3);
//	printf("%s\n", dest4);
//	printf("%s\n", dest5);
//}
