/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 15:24:31 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strstr.c"
#include "ft_putnbr.c"
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
	printf("%s\n", ft_strstr("", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
	printf("%s\n", ft_strstr("asdf qwerty", ""));
	return 0;
}
