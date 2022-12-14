/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:00:32 by zelhajou          #+#    #+#             */
/*   Updated: 2022/09/07 20:10:04 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}
