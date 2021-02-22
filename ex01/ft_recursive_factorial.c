/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:37:38 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/21 17:25:46 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb == 0 || nb == 1)
		return(1);
	return(nb * ft_recursive_factorial(nb - 1));
}

int main (void)
{
	printf("%d\n",ft_recursive_factorial(-1));
	return (0);
}
