/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:15:04 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:34:59 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		i++;
	}
	return (0);
}

/* int main()
{
const char str[] = "http://www.w3cschool.cc";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("|%c| asdf - |%s|\n", ch, ret);

   return(0);
} */