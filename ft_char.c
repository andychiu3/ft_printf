/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiftyblue <fiftyblue@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:35:08 by achiu             #+#    #+#             */
/*   Updated: 2024/04/08 22:11:13 by fiftyblue        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ap_putchar(va_list *args, int *len)
{
	char	c;

	c = va_arg(*args, int);
	ft_print_count(c, len);
}

void	ap_putstr(char *str, int *len)
{
	if (!str)
	{
		ap_putstr("(null)", len);
		return ;
	}
	while (*str)
	{
		ft_print_count(*str, len);
		str++;
	}
}
