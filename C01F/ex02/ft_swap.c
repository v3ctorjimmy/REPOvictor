/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:58:59 by vidiaz            #+#    #+#             */
/*   Updated: 2023/10/25 13:15:16 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//  int	main(void)
//  {
//  	int	a;
//  	int	b;
//  	int	temp;

//  	a = 10;
//  	b = 2;
//  	printf("valor de A:%d\nvalor de B:%d", a, b);
//  	ft_swap(&a, &b);
//  	printf("\nnuevo valor de A: %d\nnuevo valor de B: %d", a, b);
//  }
