/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:09:32 by malcosta          #+#    #+#             */
/*   Updated: 2025/08/02 13:52:43 by malcosta         ###   ########.fr       */
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
int	str_search(const char *str, char c);

#endif