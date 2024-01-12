/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:29:14 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/07 21:55:42 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbase(unsigned long n, unsigned int base, char *c)
{
	int	count;

	if (n < base)
		return (ft_putchar(c[n]));
	else
	{
		count = ft_putnbrbase(n / base, base, c);
		return (ft_putnbrbase(n % base, base, c) + count);
	}
}
