/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:38 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/09 19:40:55 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;

	temp = (char *) b;
	while (len > 0)
	{
		*temp = (char) c;
		temp++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char str[10] = "Egun on";
        size_t len = 5;

	printf("Before memset: %s\n", str);
	ft_memset(str, 'X', len);
	printf("After memset: %s\n", str);

	return 0;
}
*/
