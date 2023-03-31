/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:10:15 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/03 19:50:48 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c) 
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1); 
	else  
		return (0); 
} 
 
// int main() 
// {  
// 	char a = 'A'; 
// 	printf("%d", ft_isalpha(a)); 
// 	return(0);
// }
