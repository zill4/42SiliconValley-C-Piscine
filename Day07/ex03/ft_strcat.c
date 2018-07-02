/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:42:25 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 22:40:50 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*c;

	k = 0;
	i = 1;
	j = 0;
	c = (char *)malloc(sizeof(char) * argc);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			c[k] = argv[i][j];
			j++;
			k++;
		}
		c[k++] = '\n';
		j = 0;
		i++;
	}
	return (c);
}
