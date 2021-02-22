/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:36:59 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/21 14:36:29 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb <= 0 || nb >= 12)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

int main (void)
{	
	printf("%d\n", ft_iterative_factorial(13));
	return (0);
}
