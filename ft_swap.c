/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:48:26 by victor            #+#    #+#             */
/*   Updated: 2023/10/24 22:32:08 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
int main(void)
{
    int a;
    int b;
    
    a = 4;
    b = 2;
    printf("a = %d\nb = %d", a, b);
    ft_swap(&a, &b);
    printf("\nvalores cambiados\na = %d\nb = %d", a, b);

}*/