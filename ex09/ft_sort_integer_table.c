/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:18:41 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/24 17:19:00 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_integer_table(int *tab, int size){
	int i;
	int tmp;
	i = 0;
	tmp = 0;
	while(i < (size -1)){
		if(tab[i] > tab[i+1]){
			tmp = tab[i+1];
			tab[i+1] = tab[i];
			tab[i] = tmp;
			i =0;
		
		}        
		else{
			i++;
		}
	
	}
		printf("%i",tab[4]);	
	
}

int main(){
	int arr = {1,9,4,8,0};
	 ft_sort_integer_table(&arr,3);
}
