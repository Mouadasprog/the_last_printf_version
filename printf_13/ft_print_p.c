/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:10:00 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 22:43:09 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex(unsigned long n)
{
	char	*hex_numbers;
	int		count;

	hex_numbers = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16);
	count += ft_putchar(hex_numbers[n % 16]);
	return (count);
}

int	ft_print_p(void *ptr)
{
	unsigned long	address;
	int				printed_chars;

	if ((int *)ptr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	address = (unsigned long)ptr;
	printed_chars = 0;
	printed_chars += ft_putstr("0x");
	printed_chars += ft_print_hex(address);
	return (printed_chars);
}
