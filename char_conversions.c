/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conversions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:18 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 13:49:32 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}

int	ft_putchar(int c)
{
	int	len;

	len = 0;
	len = write(1, &c, 1);
	return (len);
}