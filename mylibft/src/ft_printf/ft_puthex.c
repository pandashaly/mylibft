/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:44:39 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/07 21:42:40 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/*int	ft_putnbr(long n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}*/

/*void	ft_puthex(unsigned int n, char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c);
	ft_putchar(base[n % 16]);
}*/

int	ft_putnbrbase(long n, int base, char *c)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnbrbase(-n, base, c) + 1);
	}
	if (n < base)
		return (ft_putchar(c[n]));
	else
	{
		count = ft_putnbrbase(n / base, base, c);
		return (ft_putnbrbase(n % base, base, c) + count);
	}
}

/*int	main(void)
{
	unsigned int	n;
	char			c;
	char			*x;
	char			*X;
	int				i;

	n = 17729936;
	c = 'x';
	x = "0123456789abcdef";
	X = "0123456789ABCDEF";
	i = ft_putnbrbase(n, 16, x);

	printf(" nbrbse %d\n", i);
	printf("\n");
	//ft_puthex(n, c);
	printf("\n");
	printf("realx: %x\n", n);
	printf("realX: %X\n", n);
	return (0);
}*/
