/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:43 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/26 17:57:39 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	
	i = 0;
	cc = (char) c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char *str = "Egun on";
	int c = '4';
	char *result = ft_strchr(str, c);

	if (result == NULL)
		printf("Character '%c' not found in string.\n", c);
	else
		printf("Character '%c' found in string.\n", c);
}

Dado que s es un puntero constante a un carácter, 
se requiere una conversiónexplícita para eliminar 
la calificación de constante (const) 
y devolver un puntero a un carácter sin constante. 
Esto se realiza utilizando la sintaxis (char *), 
que realiza una conversión de tipo de const char * a char *
*/
