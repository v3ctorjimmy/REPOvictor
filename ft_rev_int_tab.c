/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:03:40 by victor            #+#    #+#             */
/*   Updated: 2023/10/26 22:05:34 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = size -1;
    
    while(i < size/2)
    {
        temp = tab[i];
        tab[i] =  tab[j];
        tab[j] =  temp;
        i++;
        j--;
    }
}
void imprimir(int num[], int size)
 {
     int i;
     i = 0;
     while(i < size)
     {
         printf("%d", num[i]);
         i++;
     }
}

int main(void)
{
    int size =6;
    int num[6] = {1,3,4,5,7,5};
    printf("antes:");
    imprimir(num,size);
    ft_rev_int_tab(num, size);
    printf("\nDespues:");
    imprimir(num,size);

}