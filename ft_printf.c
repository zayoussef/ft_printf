/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:44:37 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 13:14:50 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_arg(va_list p, char n, size_t *cnt)
{
	if (n == 'c')
		ft_putchar_pr(va_arg(p, int), cnt);
	else if (n == 'i' || n == 'd')
		ft_putnbr_pr(va_arg(p, int), cnt);
	else if (n == 's')
		ft_putstr_pr(va_arg(p, char *), cnt);
	else if (n == 'p')
		ft_isptr(cnt, p);
	else if (n == 'u')
		ft_putuns_pr(va_arg(p, unsigned int), cnt);
	else if (n == 'x' || n == 'X')
	{
		if (n == 'x')
			ft_puthex_pr(va_arg(p, unsigned int), cnt, HEX_LOWER);
		else
			ft_puthex_pr(va_arg(p, unsigned int), cnt, HEX_UPPER);
	}
	else if (n == '%')
		ft_putchar_pr('%', cnt);
	else
		ft_putchar_pr(n, cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list	p;
	size_t	cnt;
	int		i;

	i = 0;
	cnt = 0;
	va_start(p, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break ;
			ft_print_arg(p, (char)str[i], &cnt);
		}
		else
			ft_putchar_pr(str[i], &cnt);
		i++;
	}
	va_end(p);
	return ((int)cnt);
}
