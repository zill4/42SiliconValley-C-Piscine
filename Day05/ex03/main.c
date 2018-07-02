/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 14:15:25 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strcpy.c"
#include "ft_putnbr.c"
#include <stdio.h>
int main()
{
	char test1[256] = "asdf";
	printf("%s", ft_strcpy(test1, "qwerty\n"));
	printf("%s", ft_strcpy(test1, ""));
	printf("%s", ft_strcpy(test1, "hell0\n"));

	return 0;
}
