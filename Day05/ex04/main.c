/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 14:29:25 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strncpy.c"
#include "ft_putnbr.c"
#include <stdio.h>
int main()
{
	char test1[256] = "asdf";
	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test1, "qwerty", 4));
	printf("%s\n", ft_strncpy(test1, "z", 1));
	return 0;
}
