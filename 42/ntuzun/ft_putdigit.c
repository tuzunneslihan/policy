/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:51:22 by ntuzun            #+#    #+#             */
/*   Updated: 2018/09/25 18:51:31 by ntuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putdigit(char d)
{
	if (d > 9)
		return (ft_putchar(d + ('a' - 10)));
	else
		return (ft_putchar(d + '0'));
}
