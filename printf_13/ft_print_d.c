/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:50:56 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 08:36:49 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_min_int(void)
{
	int	count;

	count = 0;
	count += ft_putchar('-');
	count += ft_putchar('2');
	return (count);
}

static int	handle_negative(int *n)
{
	int	count;

	count = 0;
	count += ft_putchar('-');
	*n = -(*n);
	return (count);
}

int	ft_print_d(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
	{
		count += handle_min_int();
		n = 147483648;
	}
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
		count += handle_negative(&n);
	if (n >= 10)
		count += ft_print_d(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
