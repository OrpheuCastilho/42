/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:33:44 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/16 10:34:24 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * num);
}

/*

Converte strings em números inteiros

int   main(void)
{
    char    nptr1[] = " 1257 -  -----1234ab567";
    char    nptr2[] = " 1257 -  -----1234ab567";
    printf("Teste1:\nString: %s\n", nptr1);
    printf("Return: %d\n", ft_atoi(nptr1));
    printf("Teste2:\nString: %s\n", nptr2);
    printf("Return: %d\n", atoi(nptr2));
}*/
