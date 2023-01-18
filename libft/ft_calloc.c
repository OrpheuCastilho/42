/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:40:55 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:34:31 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*final;
	size_t	total;
	size_t	i;

	total = size * nmemb;
	final = malloc(total);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		final[i] = 0;
		i++;
		total--;
	}
	return ((void *)final);
}
