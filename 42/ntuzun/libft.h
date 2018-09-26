/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 21:27:12 by ntuzun            #+#    #+#             */
/*   Updated: 2018/09/25 20:39:58 by ntuzun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putdigit(char d);
int	ft_putstr(char *str);
int	ft_putnbr_base(long n, char base);
int	b_printf(const char *format, ...);
int	print_special(const char **ptr, va_list *argp);

#endif
