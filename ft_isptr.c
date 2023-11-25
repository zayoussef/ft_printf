/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:44:53 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 17:49:31 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_isptr(size_t *cnt, va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	ft_putstr_pr("0x", cnt);
	ft_puthex_pr((unsigned long)ptr, cnt, HEX_LOWER);
}
