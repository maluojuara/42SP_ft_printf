/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:32 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 17:21:03 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *toprint, ...);

// CHAR CONVERSIONS
int	ft_putstr(const char *str);
int	ft_putchar(int c);

//UTILS
int	normal_print(char **str);
int	format_prints(va_list *args, char format);

#endif