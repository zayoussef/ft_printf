/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:46:04 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 12:56:32 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns_pr(unsigned int n, size_t *cmp)
{
	if (n >= 10)
		ft_putuns_pr(n / 10, cmp);
	ft_putchar_pr(n % 10 + '0', cmp);
}
