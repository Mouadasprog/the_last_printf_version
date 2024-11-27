/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:28:11 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 08:38:36 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	if (n >= 10)
		count += ft_print_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
