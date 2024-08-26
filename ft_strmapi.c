/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:35:17 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/29 18:46:27 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str = '\0';
	return (str);
}
/*
char test_function(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char s[] = "Egun on!";
	char *result;

	result = ft_strmapi(s, test_function);
	if (result)
	{
		printf("Original: %s\n", s);
		printf("Modified: %s\n", result);
		free(result);
	}
	return 0;
}

 * PARAMETROS:	s: La string que iterar.
		f: La función a aplicar sobre cada carácter.

RETURN:	La string creada tras el correcto uso de ’f’ sobre
	cada carácter. NULL si falla la reserva de memoria

DESCRIPT: A cada carácterchar my_function(unsigned int i, char c)
{
	(void)i; // Ignorar el índice en esta función
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char s[] = "Hello, World!";
	char *result;

	result = ft_strmapi(s, my_function);
	if (result)
	{
		printf("Original: %s\n", s);
		printf("Modified: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to allocate memory for modified string.\n");
	}

	return 0;
} de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo de ’f’
*/
