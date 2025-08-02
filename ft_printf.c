/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 15:11:26 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *fixed, ...)
{
	int		nb_printed;
	va_list	args;
	
	va_start(args, fixed);
	
	nb_printed = 0;
	while (*fixed)
	{
		if (*fixed != '%' && !)
			nb_printed += ft_putchar(*fixed);
		else if (*fixed == 'c')
			nb_printed += ft_putchar(va_arg(args, int));
		else if (*fixed == 's')
			nb_printed += ft_putstr(va_arg(args, const char *));
		fixed++;
	}
	va_end(args);
	return (nb_printed);
}

int	main ()
{
	int printed;
	char	*c = "abcd";
	// char	a = '9';

	printed = 0;
	printf("%d\n", ft_printf("oieeeeee %s", c));
	printf("%d\n", printf("oieeeeee %s", c));
	return (0);
}