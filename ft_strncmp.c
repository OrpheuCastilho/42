/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:12:31 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:55 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (n == 0 || n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main ()
{
    size_t n = 10;

    char *s1 = "abc25";
	char *s2 = "abc2";

    printf("Teste 1\n");
	printf("%d\n", ft_strncmp(s1, s2, n));
    printf("\nTeste 2\n");
	printf("%d\n", strncmp(s1, s2, n));
}*/
