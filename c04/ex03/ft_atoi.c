/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:55:03 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/23 22:07:10 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	counter;
	int	x;

	i = 0;
	counter = 0;
	x = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		x = (x * 10) + (str[i] - '0');
		i++;
	}
	if (counter % 2 == 1)
		x = -x;
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = " ---+--+123476453453453ab567";
	//char	str[] = "-2147483648";
	int	i;

	i = ft_atoi(str);
	printf("%d", i);
	return (0);
}*/
