/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:22:19 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/27 16:29:01 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i = 0;
	int	size;

	size = ft_ultimate_range(&range, -8, -9);
	while (i < size)
	{
		printf("%d", range[i++]);
	}
	free(range);
	return (0);
}*/
