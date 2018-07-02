/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:06:31 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/23 20:23:40 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int nb2;

	nb2 = 2;
	if (nb <= 1)
	{
		return (ft_find_next_prime(nb + 1));
	}
	while (nb2 <= nb / 2)
	{
		if (nb % nb2 == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		nb++;
	}
	return (nb);
}
