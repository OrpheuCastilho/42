/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:42:36 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:36:07 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	final = malloc(sizeof(char) * (len + 1));
	if (!final || !s)
		return (NULL);
	if (start > s_len)
	{
		final = malloc(sizeof(char) * 1);
		if (!final)
			return (NULL);
		final[0] = '\0';
		return (final);
	}
	i = 0;
	while (i < s_len && len-- > 0)
		final[i++] = s[start++];
	final[i] = '\0';
	return (final);
}
/*
Converte strings em números inteiros:

int		main()
{
	char str[] = "aaa bbb ccc";
	char *asd;
	int start = 1;
	int length = 5;
	printf("%s\n", str);
	asd = ft_substr(str, start, length);
	printf("%s\n", asd);
	return (0);
}*/