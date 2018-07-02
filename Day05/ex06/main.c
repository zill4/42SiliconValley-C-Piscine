/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 19:05:53 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strcmp.c"
#include "ft_putnbr.c"
#include <stdio.h>
int main()
{
	char* test1 = "asdf";
	char* test2 = "asde";
	char* test3 = "asdg";
	char* test4 = "";
	printf("%d",ft_strcmp(test1,test1));
	printf("%d",ft_strcmp(test2,test1));
	printf("%d",ft_strcmp(test3,test1));
	printf("%d",ft_strcmp(test4,test4));
	return 0;
	}
