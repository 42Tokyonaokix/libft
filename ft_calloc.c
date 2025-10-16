/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:54:00 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 06:55:02 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	lnb;
	void	*ptr;

	lnb = nmemb * size;
	if (lnb == 0)
		return (malloc(1));
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	ptr = malloc(lnb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, lnb);
	return (ptr);
}

//int main(int argc, char **argv)
//{
//	printf ("%p\n", ft_calloc(2, 0));
//	printf ("%p\n", calloc(2, 0));
//	printf ("%p\n", ft_calloc(2, -2));
//	printf ("%p\n", calloc(2, -2));
//	printf ("%p\n", ft_calloc(0, -2));
//	printf ("%p\n", calloc(0, -2));
//	(void)argc;
//	(void)argv;
//}
