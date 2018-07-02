/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 08:57:45 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/27 10:28:53 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i)
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;
	int 	i;

	i = 0;
	size = len(src);
	copy = (char *)malloc(size);
	while (i < size)
	{	
		copy[i] = src[i];
		i++;
	}
	return copy;
}	
