/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:40:00 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 11:03:21 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>

int main()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test, "", 16));
	printf("%s\n", ft_strncat(test, "qwerty", 0));
	printf("%s\n", ft_strncat(test, "asdf", 3));
	return (0);
}

