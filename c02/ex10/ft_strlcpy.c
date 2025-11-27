/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:55:14 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 21:52:21 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	if (len_src > 0)
	{
		i = 0;
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len_src);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	dest[30];
	char	src[] = "hola que tal";
	unsigned int	size = 13;
	unsigned int	i;

	i = ft_strlcpy(dest, src, size);
	printf("%s %s %i", dest, src, i);
	return (0);
}*/
