/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 18:22:06 by dsong             #+#    #+#             */
/*   Updated: 2018/06/24 19:39:07 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	width_x(int x, int height, int h)
{
	int w;

	w = 0;
	while (w <= x)
	{
		if (w == 0 && h == 0)
			ft_putchar('A');
		else if (w == 0 && h == height)
			ft_putchar('C');
		else if (w == x && h == 0)
			ft_putchar('C');
		else if (w == x && h == height)
			ft_putchar('A');
		else if (w == 0 || h == 0 || h == height || w == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		w++;
	}
}

void	rush04(int x, int y)
{
	int h;
	int w;

	y = y - 1;
	x = x - 1;
	h = 0;
	w = 0;
	while (h <= y)
	{
		width_x(x, y, h);
		ft_putchar('\n');
		h++;
	}
}
