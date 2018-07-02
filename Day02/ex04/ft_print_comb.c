/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:19:03 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/21 23:16:47 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_dragons(int a, int b, int c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
}

void	ft_monkeys(int a, int b, int c)
{
	if (!(a == 7 && b == 8 && c == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_dragons(a, b, c);
				ft_monkeys(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
