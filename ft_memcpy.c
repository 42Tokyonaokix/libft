/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:15 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 07:06:12 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			count;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	count = 0;
	while (psrc && pdest && count < n)
	{
		pdest[count] = psrc[count];
		count++;
	}
	return (pdest);
}

//int	main(void)
//{
//	char src[] = "hello";
//	char dest[10];
//	char dest1[10];
//	ft_memcpy(dest, src, 0);
//	memcpy(dest1, src, 0);
//	printf("%s\n", dest);
//	printf("%s\n", dest1);
//	ft_memcpy(dest, src, 3);
//	memcpy(dest1, src, 3);
//	printf("%s\n", dest);
//	printf("%s\n", dest1);
//}
