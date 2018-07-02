/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:40:09 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 22:40:12 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int *new;
	int i;
	int j;

	i = max - min;
	j = 0;
	if (i <= 0)
		return (0);
	new = (int *)malloc(sizeof(int) * i);
	if (!new)
		return (0);
	while (min < max)
	{
		new[j] = min;
		min++;
		j++;
	}
	*range = new;
	return (i);
}
