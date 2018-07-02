/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 09:30:25 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 20:49:19 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int sign;

	sign = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (-9 <= nb && nb <= 9)
		ft_putchar((nb * sign) + '0');
	else
	{
		ft_putnbr((nb / 10) * sign);
		ft_putnbr((nb % 10) * sign);
	}
}
