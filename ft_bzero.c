/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:53:54 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 07:14:42 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int	main(void)
//{
//	char buffer1[10] = "abcdef";
//	bzero(buffer1, 2);
//	char buffer2[10] = "abcdef";
//	ft_bzero(buffer2, 2);
//	printf("%c\n", buffer1[0]);
//	printf("%c\n", buffer2[0]);
//	printf("%c\n", buffer1[1]);
//	printf("%c\n", buffer2[1]);
//	printf("%c\n", buffer1[2]);
//	printf("%c\n", buffer2[2]);
//	char buffer3[10] = "abcdef";
//	bzero(buffer3, 0);
//	char buffer4[10] = "abcdef";
//	ft_bzero(buffer4, 0);
//	printf("%c\n", buffer3[0]);
//	printf("%c\n", buffer4[0]);
//	printf("%c\n", buffer3[1]);
//	printf("%c\n", buffer4[1]);
//	printf("%c\n", buffer3[2]);
//	printf("%c\n", buffer4[2]);
//}
