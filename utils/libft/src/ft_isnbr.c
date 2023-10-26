/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:07:26 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 14:12:54 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isnbr(char	*nptr)
{
	int	i;

	i = 0;
	if (ft_atol(nptr) > 2147483647 || ft_atol(nptr) < -2147483648)
		return (0);
	if (nptr[0] == '-' && nptr[1] || nptr[0] == '+' && nptr[1])
		i++;
	while (nptr[i])
		if (nptr[i] == '-' || nptr[i] == '+' || !ft_isdigit(nptr[i++]))
			return (0);
	return (1);
}
