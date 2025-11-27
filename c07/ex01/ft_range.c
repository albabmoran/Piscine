/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:39:24 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/27 16:28:40 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (max <= min)
		return (NULL);
	size = max - min;
	result = malloc(size * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i++] = min;
		min++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*res;
	int	min = 2147483640;
	int max = 2147483647;
	int	i;

	res = ft_range(min, max);
	i = 0;
	while (res && i < 30)
		printf("%d\n", res[i++]);
	free(res);
	return (0);
}*/
