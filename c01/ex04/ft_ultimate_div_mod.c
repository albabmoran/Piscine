/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:02:56 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/06 16:42:52 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	r;
	int	*a;
	int	*b;

	n = 10;
	r = 3;
	a = &n;
	b = &r;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
	return (0);
}*/
