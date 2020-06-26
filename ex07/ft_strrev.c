/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:19:20 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/24 17:19:27 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int counter;
	char tmp;

    counter  = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	
	while (counter >= 1)
	{
	tmp =+ *str;
	str--;
	counter--;	
	}	
	
     return str; 
}
