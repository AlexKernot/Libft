/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:03:12 by akernot           #+#    #+#             */
/*   Updated: 2023/02/26 18:19:44 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

static int	skip_whitespace(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] > 8 && nptr[i] < 14)
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	long	converted;
	int		negative;
	int		i;

	converted = 0;
	i = skip_whitespace(nptr);
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		converted += nptr[i] + '0';
		converted *= 10;
		i++;
	}
	if (negative == 1)
		converted *= -1;
	return ((int)converted);
}
