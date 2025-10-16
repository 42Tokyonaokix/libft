/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:43 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 07:22:01 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	count = 0;
	if (!s)
		return (NULL);
	while (s[count - 1] || count == 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}

//int main(void)
//{
//	char *str = "hello";

//	printf("%s\n", ft_strchr(str, 'h'));
//	printf("%s\n", strchr(str, 'h'));
//	printf("%s\n", ft_strchr(str, 'o'));
//	printf("%s\n", strchr(str, 'o'));
//	printf("%s\n", ft_strchr(str, 'l'));
//	printf("%s\n", strchr(str, 'l'));
//	printf("%p\n", ft_strchr(str, '\0'));
//	printf("%p\n", strchr(str, '\0'));
//	printf("%p\n", ft_strchr(str, 'k'));
//	printf("%p\n", strchr(str, 'k'));
//	printf("%p\n", ft_strchr(NULL, '\0'));
//	printf("%p\n", strchr(NULL, '\0'));
//}
