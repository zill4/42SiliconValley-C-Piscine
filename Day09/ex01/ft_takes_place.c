/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:47:59 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/29 16:48:10 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_takes_place(int hour)
{
	int endtime;

	endtime = hour + 1;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12)
		printf("%d", hour - 12);
	else if (hour == 0)
		printf("%d", hour + 12);
	else
		printf("%d", hour);
	printf("%s", ".00");
	if (hour >= 12)
		printf("%s", " P.M. AND ");
	else
		printf("%s", " A.M. AND ");
	if (hour >= 12)
		printf("%d", endtime - 12);
	else
		printf("%d", endtime);
	printf("%s", ".00");
	if (endtime >= 12 && endtime < 24)
		printf("%s", " P.M.");
	else
		printf("%s", " A.M.");
	printf("%s", "\n");
}
