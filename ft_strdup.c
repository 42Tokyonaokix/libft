/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:55:46 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 08:49:58 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	count;
	char	*dest;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	count = 0;
	while (str[count])
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

//int main(int argc, char **argv)
//{
//	printf ("%s\n", ft_strdup("abcde"));
//	printf ("%s\n", strdup("abcde"));
//	printf ("%p\n", ft_strdup(""));
//	printf ("%p\n", strdup(""));
//	printf ("%s\n", ft_strdup(NULL));
//	printf ("%s\n", strdup(NULL));
//	(void)argc;
//	(void)argv;
//}
