/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:19:45 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:43 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen((char *)src);
	if (size <= sizedst)
		return (sizesrc + size);
	while (sizedst < (size - 1) && src[i] != '\0')
	{
		dst[sizedst] = src[i];
		i++;
		sizedst++;
	}
	dst[sizedst] = '\0';
	return (sizesrc + ft_strlen(dst) - i);
}
