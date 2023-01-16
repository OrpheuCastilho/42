/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:58:12 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:02 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/* int main()
{
    char s1[10] = "'\0'abc";
    char s2[10] = "'\0'abz";
    
    int n = 10;

    printf("memcmp %d\n", memcmp(s1, s2, n));
    printf("ft_memcmp %d\n", ft_memcmp(s1, s2, n));
    
    return 0;
} */
