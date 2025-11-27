/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:13:32 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 22:35:11 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (s1[i - 1] - s2[i - 1]);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	char	*pr1_1 = strdup("");
	char	*pr1_2 = strdup("a");
	char	*pr2_1 = strdup("a");
	char	*pr2_2 = strdup("");
	int		i;

	if (argc != 4)
		return (-1);
	i = ft_strncmp(pr1_1, pr1_2, 1);
	printf("my_strncpm: %i\n", i);
	i = strncmp(pr1_1, pr1_2, 1);
	printf("strncmp: %i\n", i);
	free(pr1_1);
	free(pr1_2);
	free(pr2_1);
	free(pr2_2);
	pr1_1 = strdup(argv[1]);
	pr1_2 = strdup(argv[2]);
	pr2_1 = strdup(argv[1]);
	pr2_2 = strdup(argv[2]);
	i = ft_strncmp(pr1_1, pr1_2, 1);
	printf("my_strncpm: %i\n", i);
	i = strncmp(pr1_1, pr1_2, 1);
	printf("strncmp: %i\n", i);
	free(pr1_1);
	free(pr1_2);
	free(pr2_1);
	free(pr2_2);	
	return (0);
}*/
