/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:39:24 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/12 12:54:55 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (32 <= str[i] && str[i] <= 126)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	a[] = "";
	int	i;

	i = ft_str_is_printable(a);
	printf("%d", i);
	write(1, "holaquetalñ", 11);
	return (0);
}*/
