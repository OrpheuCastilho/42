/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:59:58 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:23 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* int	main(void)
{
	char	a[] = "Yuri";
	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s\n\n", "ft_putstr_fd =");
	ft_putstr_fd(a, 1);
	return (0);
} */