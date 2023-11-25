/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:45:23 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 12:54:42 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pr(unsigned long n, size_t *cmp, char *base)
{
	if (n > 15)
	{
		ft_puthex_pr(n / 16, cmp, base);
		ft_putchar_pr(base[n % 16], cmp);
	}
	else
		ft_putchar_pr(base[n % 16], cmp);
}
