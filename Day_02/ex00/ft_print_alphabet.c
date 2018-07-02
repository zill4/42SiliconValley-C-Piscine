/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 12:29:49 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/21 22:35:27 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int letter;

	letter = 97;
	while (letter < 123)
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
}
