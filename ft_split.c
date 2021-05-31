/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:16:44 by cmasse            #+#    #+#             */
/*   Updated: 2021/03/22 12:47:35 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static char	**ft_nb_ligne(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return ((char **)calloc(sizeof(char *), count + 1));
}

static char	**ft_words(char **str, char const *s, char c)
{
	int		i;
	int		y;
	int		x;

	i = 0;
	y = 0;
	x = 0;
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			y++;
			i++;
		}
		if (y != 0)
			str[x++] = (char *)calloc(sizeof(char), (y + 1));
		y = 0;
		while (s[i] == c && s[i])
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	int		x;
	char	**str;

	i = 0;
	y = 0;
	x = 0;
	if (!s)
		return (0);
	str = ft_words(ft_nb_ligne(s, c), s, c);
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			y = 0;
		while (s[i] != c && s[i])
			str[x][y++] = s[i++];
		x += 1;
	}
	return (str);
}

int main(int ac, char **av)
{
	char *test = "qwerty\nuioqiuytreqq\nertyuiooiuqytrqeq\nrtyquioqqiuy\nqtreqqyuqi";
	char **splet;
	int i = 0;
	
	splet = ft_split(test, 10);
	while(splet[i])
	{
		printf("%s\n", splet[i]);
		i++;
	}
	return(0);
}
