/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:23:42 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/30 14:26:57 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > strlen)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > strlen - start)
		len = strlen - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	substr[len + 1] = '\0';
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int main()
{
	char str[] = "Egun on eta gabon";
	int start = 12;
	size_t len = 7;
	printf("%s",ft_substr(str,start,len));
}

 * PARAMETROS:
 * 	s: La string desde la que crear la substring.
	start: El índice del caracter en ’s’ desde el que
empezar la substring.
	len: La longitud máxima de la substring.

RETURN: la substring resultante . NULL si falla la reserva de memoria.

DESCRIPT: Reserva (con maloc(3)) y devuelve una substring de la string s.
	La substr empieza desde start y su longitud max es de len.
*/
