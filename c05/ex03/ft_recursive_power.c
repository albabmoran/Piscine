/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:40:37 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/25 13:50:35 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb < 0 && power == 0)
		return (-1);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 12;
	int	power = 3;

	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/
