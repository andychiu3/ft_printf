/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiftyblue <fiftyblue@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:00:17 by achiu             #+#    #+#             */
/*   Updated: 2024/04/09 10:37:19 by fiftyblue        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_conversion(va_list *args, char c, int *len);
void	ft_print_count(char c, int *len);

void	ap_putchar(va_list *args, int *len);
void	ap_putstr(char *str, int *len);

void	ap_nbr(va_list *args, int *len);
void	ap_unbr(va_list *args, int *len);
void	ap_putnbr(unsigned int nbr, int *len);
// void	ap_putunbr(va_list args, int len);

void	ap_puthex(unsigned long hex, int *len, char c);
void	ap_puthex_adr(void *ptr, int *len, char c);

#endif
