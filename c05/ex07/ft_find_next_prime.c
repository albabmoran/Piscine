/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:42:11 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/25 14:02:20 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (test_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 0;

	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/
