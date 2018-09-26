/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 21:22:45 by ntuzun            #+#    #+#             */
/*   Updated: 2018/09/25 18:53:46 by ntuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(long n, char base)
{
	int		len;
	long	divider;

	len = 0;
	if (base == 10 && n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	divider = 1;
	while (divider * base <= n)
		divider *= base;
	while (divider)
	{
		len += ft_putdigit(n / divider % base);
		divider /= base;
	}
	return (len);
}
