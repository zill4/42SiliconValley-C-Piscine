/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 21:02:56 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/21 22:28:29 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The following prints out two character pairs.
**such as 00 01,
**Notice the first will be always one less than the right
**final result will be, 98 99
*/

int		ft_putchar(char c);

void	ft_bunnies(int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	x = n % 10;
	y = (n - x) / 10;
	ft_putchar(48 + y);
	ft_putchar(48 + x);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_bunnies(a);
			ft_putchar(' ');
			ft_bunnies(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
