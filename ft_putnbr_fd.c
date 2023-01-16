/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:01:01 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:35:20 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
		{
			ft_putchar_fd((n + '0'), fd);
		}
	}
}

/* int	main(void)
{
	int	a = -2147483648;
	int	b = 2147483647;
	int	c = 155;
	int	d = 0;
	printf("%s", "a = ");
	printf("%d\n", a);
	printf("%s\n", "ft_putnbr_fd(a,1) = ");
	ft_putnbr_fd(a,1);
	printf("\n\n");
	printf("%s", "b = ");
	printf("%d\n", b);
	printf("%s\n", "ft_putnbr_fd(b,1) = ");
	ft_putnbr_fd(b,1);
	printf("\n\n");
	printf("%s", "c = ");
	printf("%d\n", c);
	printf("%s\n", "ft_putnbr_fd(c,1) = ");
	ft_putnbr_fd(c,1);
	printf("\n\n");
	printf("%s", "d = ");
	printf("%d\n", d);
	printf("%s\n", "ft_putnbr_fd(d,1) = ");
	ft_putnbr_fd(d,1);
	printf("\n\n");
	return (0);
} */