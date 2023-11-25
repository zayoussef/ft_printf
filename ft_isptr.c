/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:44:53 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 12:56:11 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_isptr(size_t *cmp, va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	ft_putstr_pr("0x", cmp);
	ft_puthex_pr((unsigned long)ptr, cmp, HEX_LOWER);
}
