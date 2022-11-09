/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:03:54 by gacastil          #+#    #+#             */
/*   Updated: 2022/11/09 11:03:55 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
		const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = -1;
	i = ft_strlen(src);
	if (!dstsize)
		return (i);
	while (*src && ++j < dstsize - 1)
		*dst++ = *src++;
	*dst = 0;
	return (i);
}
