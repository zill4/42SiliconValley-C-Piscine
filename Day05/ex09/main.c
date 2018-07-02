/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 19:43:17 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strncmp.c"
#include "ft_putnbr.c"
#include <stdio.h>
int main()
{
	char* test1 = "asdf";
	char* test2 = "zzz";
	char* test3 = "asdg";
	char* test4 = "";
	printf("%d",ft_strncmp(test1,test1,2 ));
	printf("%d",ft_strncmp(test2,test1,3));
	printf("%d",ft_strncmp(test3,test1,5));
	printf("%d",ft_strncmp(test4,test4,1));
	return 0;
	}
