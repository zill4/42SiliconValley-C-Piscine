/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:10:08 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 23:08:33 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	**ft_split_whitespaces(char *str)
{
	int i;
	int c;
	int k;
	char** words;

	i = 0;
	c = 0;
	k = 0;
	words = (char**)malloc(10000);
	words[k] = (char*)malloc(1000);
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') )
		{
			c++;
			words[k][c] = '\0';
			if (str[i+1] != '\0')
			{
				k++;
				words[k] = (char*)malloc(1000);
				c = 0;	
			}
			else
			{
				words[k][c] = str[i];
				c++;
			}
		
		}
		i++;
	}
	return (words);
}
int main()
{
char** res;
for (res = ft_split_whitespaces("   \t\nlol hi    \t\n"); *res != 0; res++)
	printf("'%s',", *res);

}
