/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:16:21 by senayat           #+#    #+#             */
/*   Updated: 2024/04/22 22:11:13 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_putb(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_putb(n / 16);
	len += ft_putc("0123456789abcdef"[n % 16]);
	return (len);
}

size_t	ft_putp(void *addr)
{
	unsigned long	n;
	size_t			len;

	if (!addr)
		return (ft_puts("0x0"));
	n = (unsigned long)addr;
	len = ft_puts("0x");
	len += ft_putb(n);
	return (len);
}
