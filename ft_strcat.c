/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:14:55 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 16:33:53 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s);

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dst);
	while (src[i] != 0)
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = 0;
	return (dst);
}
