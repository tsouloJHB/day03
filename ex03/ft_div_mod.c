/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:23:35 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/19 17:30:12 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_add(int a, int b, int *div, int *mod){
 
	*div = a / b;
    *mod = a%b;
     printf("div = %d and mod = %i\n",*div,*mod);
}

int main(){

 int a = 4;
 int b = 6;
 int c = 8;
 int d = 9;
 ft_div_add(a,b,&c,&d);


}
