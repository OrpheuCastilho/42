/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:44 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:46 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

/*int     main(void)
{
	int s = -10;

	char    src1[] = "abcde";
	char    dst1[] = "12345678";
	printf("dst1 antes = %s\n", dst1);
	printf("ft_strlcpy = %zu\n", ft_strlcpy(dst1,src1,s));
	printf("dst1 depois = %s\n\n", dst1);

	char    src2[] = "abcde";
	char    dst2[] = "12345678";
	printf("dst2 antes  = %s\n", dst2);
        printf("strlcpy     = %ld\n", strlcpy(dst2,src2, s));
        printf("dst2 depois = %s\n", dst2);
}*/
//run with:
//gcc -o a.out ft_strlcpy.c -lbsd && ./a.out
