/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:12:32 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 17:28:13 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;
	char		*match_start;

	i = 0;
	j = 0;
	match_start = (char *)haystack;
	while (i < n && haystack[i] != 0)
	{
		if (needle[j] == 0)
			return (match_start);
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				match_start = (char *)&haystack[i];
			j++;
		}
		else
		{
			j = 0;
			match_start = (char *)haystack;
		}
		i++;
	}
	return (NULL);
}
