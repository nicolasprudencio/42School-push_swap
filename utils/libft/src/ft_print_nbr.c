/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:35:22 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/23 22:11:32 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{	
	int			letter_counter;
	long		nbr;

	nbr = n;
	letter_counter = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		letter_counter += ft_putchar('-');
	}
	if (nbr / 10 > 0)
		letter_counter += ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	letter_counter += ft_putchar(nbr);
	return (letter_counter);
}
