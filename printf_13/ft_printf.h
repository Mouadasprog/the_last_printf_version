/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:41:14 by mouad             #+#    #+#             */
/*   Updated: 2024/11/27 08:41:36 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_print_p(void *ptr);
int		ft_puthexalow(unsigned int n);
int		ft_puthexaup(unsigned int n);
int		ft_print_d(int n);
void	ft_print_percent(void);
int		ft_print_i(int n);
int		ft_print_u(unsigned int n);
int		ft_printf(const char *format, ...);

#endif
