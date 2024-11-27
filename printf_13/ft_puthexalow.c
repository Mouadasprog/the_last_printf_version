/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:45:57 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 08:39:50 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexalow(unsigned int n)
{
	char	*hex_numbers;
	int		count;

	hex_numbers = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthexalow(n / 16);
	}
	count += ft_putchar(hex_numbers[n % 16]);
	return (count);
}
