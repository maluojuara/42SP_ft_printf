/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 17:22:23 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *fixed, ...)
{
	int		nb_printed;
	va_list	args;
	char	*ptr;
	
	va_start(args, fixed);
	nb_printed = 0;
	ptr = (char *)fixed;
	while (*ptr)
	{
		nb_printed += normal_print(&ptr);
		if (!*ptr)
			break ;
		nb_printed += format_prints(args, *ptr);
		ptr++;
	}
	va_end(args);
	return (nb_printed);
}

int	main (void)
{
	int printed;
	char	*c = "abcd";
	char	a = '9';

	printed = 0;
	printf("%d\n", ft_printf("oieeeeeesc %s   %c", c, a));
	printf("%d\n", printf("oieeeeeesc %s   %c", c, a));
	return (0);
}