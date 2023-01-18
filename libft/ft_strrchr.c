/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:40:58 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/18 14:48:03 by gacastil         ###   ########.fr       */
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
