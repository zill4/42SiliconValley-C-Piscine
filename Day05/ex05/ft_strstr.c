/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 15:24:42 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 21:03:33 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int p;

	p = 0;
	k = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (to_find[k] == str[i + k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		i++;
	}
	return (0);
}
