/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:27:23 by akernot           #+#    #+#             */
/*   Updated: 2023/03/05 19:27:23 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strtrim(const char *s)
{
	char *new_string;
	int	length;
	int	start;
	int	end;

	if (s == NULL)
		return (NULL);
	length = ft_strlen((char *)s);
	start = 0;
	while (s[start] == ' ' || s[start] == '\n'
		|| s[start] == '\t' || start < length)
		start++;
	end = length - 1;
	while (s[end] == ' ' || s[end] == '\n'
		|| s[end] == '\t' || end > 0)
		end--;
	length = end - start;
	new_string = (char *)malloc(length * sizeof(char) + 1);
	ft_memcpy((void *) new_string, (void *)(&s[start]), length);
	new_string[length] = 0;
	return (new_string);
}