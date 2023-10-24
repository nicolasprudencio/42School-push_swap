/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:08:29 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/24 13:39:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_long(int n)
{
	unsigned int	nbr;
	int				letter_counter;

	nbr = n;
	letter_counter = 0;
	if (n < 0)
	{
		nbr = 4294967296 + nbr;
		return (16);
	}
	if (nbr / 10 > 0)
		letter_counter += ft_print_long(nbr / 10);
	nbr = nbr % 10 + '0';
	letter_counter += ft_putchar(nbr);
	return (letter_counter);
}
