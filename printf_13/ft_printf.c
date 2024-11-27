/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:58:30 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 22:36:46 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char c, va_list args)
{
	if (c == 'd')
		return (ft_print_d(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (c == 'i')
		return (ft_print_i(va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthexalow(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_print_p(va_arg(args, void *)));
	else if (c == 'X')
		return (ft_puthexaup(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			printed_char;
	const char	*ptr;

	printed_char = 0;
	ptr = format;
	if (!format || write(1, 0, 0) == -1)
	{
		return (-1);
	}
	va_start(args, format);
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			printed_char += handle_format(*ptr, args);
		}
		else
			printed_char += ft_putchar(*ptr);
		ptr++;
	}
	va_end(args);
	return (printed_char);
}
