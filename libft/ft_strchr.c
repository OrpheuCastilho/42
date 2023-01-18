/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:37:35 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:30 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/* # include <string.h>
int		main(void)
{
	char str[] = "Yuri Geovani";
	char	a;
	a = 'u';
	ft_strchr(str, a);
	printf("%s", (char *)ft_strchr(str, a));
	printf("\n");
	printf("%s", strchr(str, a));
	return (0);
} */