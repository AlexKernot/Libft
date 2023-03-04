/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:27:33 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 16:37:30 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string);

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	size1;
	int	size2;

	i = 0;
	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	while (i < size1 && i < size2)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (size1 != size2)
		return (0);
	return (1);
}
