/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:40:58 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:36:02 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			str = ((char *)s);
		s++;
	}
	return (str);
}

/* int		main(void)
{
	char str[] = "asdf asdf asdf";
	char	a;
	a = 'u';
	printf("%s", (char *)ft_strrchr(str, a));
	printf("\n");
	printf("%s", strrchr(str, a));
	return (0);
} */