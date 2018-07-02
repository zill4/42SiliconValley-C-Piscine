/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:40:00 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 12:14:16 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.c"
#include <stdio.h>

int main()
{
char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcat(test, "asdf", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 6));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 4));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 0));
printf("%s\n", test);

	return(0);
}

