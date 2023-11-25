/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:44:53 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/24 09:54:55 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
void	ft_putchar_pr(int c, size_t *cmp);
void	ft_putstr_pr(char *s, size_t *cmp);
void	ft_putnbr_pr(int n, size_t *cmp);
void	ft_putuns_pr(unsigned int n, size_t *cmp);
void	ft_puthex_pr(unsigned long n, size_t *cmp, char *base);
void	ft_format(va_list args, char *s, size_t *cmp);
void	ft_isptr(size_t *cmp, va_list args);
#endif