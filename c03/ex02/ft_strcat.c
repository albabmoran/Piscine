/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:22:34 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 22:40:22 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	while (dest[i] != '\0')
		i++;
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(void)
{
	char	dest[11] =  "hola";
	char	src[6] = "adios";
	int	i;

	i = 0;
	ft_strcat(dest, src);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
}*/
