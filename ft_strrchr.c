/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natakaha <natakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 05:56:18 by natakaha          #+#    #+#             */
/*   Updated: 2025/10/16 06:10:14 by natakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*latest;

	latest = NULL;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s && ft_strchr(s, c))
	{
		latest = ft_strchr(s, c);
		s++;
	}
	return (latest);
}

//int main(void)
//{
//	printf("%p\n",ft_strrchr("",0));
//	printf("%p\n",strchr ("",0));
//}
