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
#include <stdio.h>

int ft_atoi(char *str){
  int j;
  while(*str != '\0'){
  	j = j * 10 + *str - '0';
  	str++;
  
  }
  	printf("%i",*str);
  return (j);
}

int main(){
	char *string;
	*string = 'thacter';
	ft_atoi(*string);
	printf("The string in integers = %i\n", ft_atoi(*string));
}
