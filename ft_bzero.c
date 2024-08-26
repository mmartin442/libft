/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:31:06 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/09 17:44:45 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *) s;
	while (n > 0)
	{
		*temp = 0;
		temp++;
		n--;
	}
}
/*
 * int	main(void)
{
	char str[10] = "Egun on";
        size_t len = 7;
	
	printf("Before bzero: %s\n", str);
	ft_bzero(str, len);
	printf("After bzero: %s\n", str);
	
	return 0;
}

 * Teniendo la librería, otra forma de hacerla seria así:
 *
 * #include <libft.h>
 *
 *void ft_bzero(void *s, size_t n)
 {
	 ft_memset(s, 0, n);
 }
*/
