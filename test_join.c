/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_join.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:41:02 by mrochet           #+#    #+#             */
/*   Updated: 2021/03/18 13:01:41 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[++i])
		return (ft_strlen(str + i) + i);
	return (i);
}

int	main(int ac, char **av)
{
	char	*str3;
	int		i;
	int		y;
	int		size;

	i = 0;
	y = 0;
	size = ft_strlen(av[1]) + ft_strlen(av[2]);
	str3 = malloc(sizeof(char) * size);
	while (y <= size - 1)
	{
		if (av[1][i])
			str3[y++] = av[1][i];
		i++;
	}
	str3[y] = 0;
	i = 0;
	printf("res = %s\n", str3);
	free(str3);
	return (0);
}
