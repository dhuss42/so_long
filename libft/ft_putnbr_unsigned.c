/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:08:32 by dhuss             #+#    #+#             */
/*   Updated: 2024/10/09 16:16:05 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *counter)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, counter);
		if (*counter == -1)
			return ;
	}
	ft_putchar(n % 10 + 48, counter);
}
