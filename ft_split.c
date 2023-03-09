/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:40:22 by akernot           #+#    #+#             */
/*   Updated: 2023/03/09 16:45:08 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int			ft_strlen(const char *string);

static char	*allocate_words(const char *s, char c, int i)
{
	int		length;
	char	*pointer;

	length = 0;
	while (s[i] != c && s[i] != 0)
	{
		i++;
		length++;
	}
	pointer = (char *)malloc(sizeof(char) * length);
	return (pointer);

static int	get_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && i > 0)
			if (s[i - 1] != c)
				words++;
		i++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**array;

	words = get_words(s, c);
	array = (char **)malloc(sizeof(int *) * words);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			skip_split(s, &i);
			words++;
			j = 0;
			array[words] = allocate_word(s, i);
			continue ;
		}
		array[words][j] = s[i];
		j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
