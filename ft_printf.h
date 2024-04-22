/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:58:17 by senayat           #+#    #+#             */
/*   Updated: 2024/04/22 22:00:27 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
size_t	ft_puts(const char *s);
size_t	ft_putc(int c);
size_t	ft_putd(int d);
size_t	ft_putp(void *addr);
size_t	ft_putu(unsigned int n);
size_t	ft_putx(unsigned int n, const char f);

#endif
