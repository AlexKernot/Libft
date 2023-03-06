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

static int	check_seperator(const char c, const char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != 0)
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *sep)
{
	char	*new_string;
	int		length;
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	length = ft_strlen((char *)s);
	start = 0;
	while (check_seperator(s[start], sep))
		start++;
	end = length - 1;
	while (check_seperator(s[start], sep))
		end--;
	length = end - start;
	new_string = (char *)malloc(length * sizeof(char) + 1);
	ft_memcpy((void *) new_string, (void *)(&s[start]), length);
	new_string[length] = 0;
	return (new_string);
}
