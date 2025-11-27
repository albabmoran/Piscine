/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:22:13 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/25 13:50:54 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	if (nb == 0 && power == 0)
		return (1);
	if (nb < 0 && power == 0)
		return (-1);
	if (power < 0)
		return (0);
	pow = 1;
	while (power > 0)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 'a';
	int	power = 2;
	int	pow;

	pow = ft_iterative_power(nb, power);
	printf("%d", pow);
	return (0);
}*/
