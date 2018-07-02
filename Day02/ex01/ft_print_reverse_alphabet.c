/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:38:21 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/21 22:41:06 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 122;
	while (letter > 96)
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
}
