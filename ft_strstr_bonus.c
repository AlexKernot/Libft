/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:12:32 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 17:24:33 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*match_start;

	i = 0;
	if (haystack == needle || *needle == 0)
		return ((char *)haystack);
	match_start = (char *)haystack;
	while (haystack[i] != 0)
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			match_start = (char *)&haystack[i];
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == 0)
					return (match_start);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
