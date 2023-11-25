/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:45:37 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 17:50:25 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pr(int n, size_t *cnp)
{
	if (n == -2147483648)
	{
		ft_putstr_pr("-2147483648", cnp);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_pr('-', cnp);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_pr(n / 10, cnp);
	ft_putchar_pr(n % 10 + '0', cnp);
}
