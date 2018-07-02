/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 13:07:33 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 10:12:08 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_split_whitespaces(char *str);

char 	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0; 
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while(tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}

}
