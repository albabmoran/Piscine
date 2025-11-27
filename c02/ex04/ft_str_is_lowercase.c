/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:12:33 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/12 12:53:46 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while ('a' <= str[i] && str[i] <= 'z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "";
	int	i;

	i = ft_str_is_lowercase(a);
	printf("%d", i);
	return (0);
}*/
