/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 22:51:21 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 23:15:35 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int main()
{
	char* lennon = "John21-3" ;
	char* jack = "1234";
	printf("%d", ft_str_is_numeric(lennon));
	printf("%d", ft_str_is_numeric(jack));
	return 0;

}
