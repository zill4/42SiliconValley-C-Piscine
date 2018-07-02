/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_pow.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 10:37:37 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/23 20:25:12 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int pow)
{
	int val;

	if (pow == 0)
	{
		return (1);
	}
	if (pow < 0)
	{
		return (0);
	}
	if (pow < 99999999)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, pow - 1));
}
