/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 21:16:17 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/02/24 21:16:18 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_adrlen(void **ptr)
{
	size_t		i;

	i = 0;
	while (ptr && *ptr++)
		++i;
	return (i);
}
