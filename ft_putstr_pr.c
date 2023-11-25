/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:45:51 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/25 12:54:31 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pr(char *s, size_t *cmp)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_putchar_pr(*s, cmp);
		s++;
	}
}
