/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:01:41 by akernot           #+#    #+#             */
/*   Updated: 2023/02/27 09:06:24 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 0)
		return (c);
	if (c < 96)
		return (c);
	return (c - 32);
}
