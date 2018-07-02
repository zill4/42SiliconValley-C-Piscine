/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:40:00 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 10:25:19 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>

int main()
{
	char test[256] = "";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test, ""));
	printf("%s\n", ft_strcat(test, "zxcv"));
	return (0);
}

