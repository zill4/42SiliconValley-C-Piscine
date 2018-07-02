/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:47:13 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/29 16:47:21 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_generic(void)
{
	char	*a;
	int		i;

	a = "Tut tut ; Tut tut";
	i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
	ft_putchar('\n');
}
