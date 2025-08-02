/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:46:53 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 17:23:44 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	normal_print(char **str)
{
	int	printed;

	printed = 0;
	while (**str && **str != '%')
	{
		printed += ft_putchar(**str);
		(*str)++;
	}
	if (**str)
		(*str)++;
	return (printed);
}

int	format_prints(va_list *args, char format)
{
	int	printed;

	printed = 0;
	if (format == 'c')
		printed = ft_putchar(va_arg(*args, int));
	else if (format == 's')
		printed = ft_putstr(va_arg(*args, const char *));
	return (printed);
}

while (*ptr)
	{
		nb_printed += normal_print(&ptr);
		if (!*ptr)
			break ;
		
		else if (*ptr == 's')
			nb_printed += ft_putstr(va_arg(args, const char *));
		else if (*ptr == 'p')
			print mmsdd
		else if (*ptr == 'd' || i)
			jfddd
		else if (u)
			jjsjsj
		else if (x)
			jjdjddj
		else if (X)
			dndkd
		else if (%)
			djdjkjkdd
		ptr++;
	}