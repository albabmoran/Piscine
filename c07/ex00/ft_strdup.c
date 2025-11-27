/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:25:16 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/27 16:28:28 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s1;
	int		i;
	int		j;

	i = ft_strlen(src);
	s1 = malloc(i + 1 * sizeof(char));
	if (!s1)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		s1[j] = src[j];
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola buenas";
	char	*s1;

	s1 = ft_strdup(str);
	printf("%s\n", str);
	printf("%s", s1);
	free(s1);
	return (0);
}*/
