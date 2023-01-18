/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:55:31 by gacastil          #+#    #+#             */
/*   Updated: 2023/01/18 20:28:44 by gacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include "./libft/libft.h"

void    ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr_hex(unsigned long long nbr, int flag);
char	*ft_uns_itoa(unsigned int n);
int		ft_printf(const char *format, ...);

#endif