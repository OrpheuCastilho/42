/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:04:24 by gacastil          #+#    #+#             */
/*   Updated: 2022/11/09 11:04:25 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
