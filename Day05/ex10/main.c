/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:54:51 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 19:57:49 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strcapitalize.c"
int		main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cingquante";
	printf("%s",ft_strcapitalize(str));
	return 0;
}
