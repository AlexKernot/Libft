/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:15:12 by akernot           #+#    #+#             */
/*   Updated: 2023/03/07 18:15:12 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(const char *string);
void	*ft_memset(void *s, int c, size_t n);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * len + 1);
	if (!new_string)
		return (NULL);
	if (ft_strlen(s) < (int)start)
		return ((char *)ft_memset(new_string, 0, len + 1));
	while (i < len && s[start + i] != 0)
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[i] = 0;
	return (new_string);
}
/*
int main(void)
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);
	printf("%s\n", ret);
	free(ret);
}*/