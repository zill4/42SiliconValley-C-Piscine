/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_stock_par.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:51:38 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 16:33:00 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

//Define structure

typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}	t_stock_par;

//Include Prototypes

t_stock_par		*ft_param_to_tab(int ac, char **av);

char		**ft_split_whitespaces(char *str);

#endif
