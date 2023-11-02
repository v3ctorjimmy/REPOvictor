/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:08:10 by vidiaz            #+#    #+#             */
/*   Updated: 2023/10/27 11:19:24 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

// int	main(void)
// {
// 	int	a = 20;

// 	int	b = 2;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("division: %d\nresto: %d", a, b);
// }