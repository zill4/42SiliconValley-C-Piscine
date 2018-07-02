/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:03:16 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/28 11:12:36 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef FT_BOOLEAN_H
# define FT_BOOLEAN.H
# include <unistd.h>
# define TRUE 1
# define False 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) ((x%2)) == 0 ? TRUE : FALSE)
# define SUCCESS 0
typedef int	t_bool;
#endif 
