/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:47:40 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/22 16:05:00 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s)[j] == (unsigned char)c)
			return (&((unsigned char *)s)[j]);
		else
			j++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s = "Egun on";
	int c = 'n';
	size_t n = strlen(s);

      void *result = ft_memchr(s, c, n);
    if (result != NULL)
        printf("Se encontró '%c'\n", c);
    else
        printf("No se encontró '%c'en la cadena\n", c);
    return 0;
}
*/
