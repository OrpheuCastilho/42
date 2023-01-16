/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:00:34 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:17 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	char	a[] = "Yuri";
	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s\n\n", "ft_putendl_fd =");
	ft_putendl_fd(a, 1);
	return (0);
} */