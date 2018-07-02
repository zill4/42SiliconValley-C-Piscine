/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:51:11 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/29 16:45:36 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_unmatch(int *tab, int length)
{
	int initial;
	int second;
	int finder_count;
	int found_num;
	int k;
	int count[length];

	k = 0;
	found_num = 0;
	finder_count = 0;
	initial = 0;
	second = 0;

	while (tab[initial])
	{
		while (k < 10) 
		{
			if ( k == tab[initial] )
			   count[k] += 1;`

		k++;
		}
		k = 0;
		initial++;
	}
	k = 0;
	while ( count[k] ) 
	{
		if (count[k] > 2 || count[k] < 2)
			found_num = count[k];
		k++;
	}
	return (found_num);
}

int main()
{

	int tester[] = {1,1,2,3,4,3,4};
	int tester2[9] = {1,1,2,4,3,4,2,3,4};
	
	printf("%d",ft_unmatch(tester,6));
	printf("%d",ft_unmatch(tester2,9));
	return 0;

}
	
