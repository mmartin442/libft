/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:23:42 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/26 19:51:22 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	if ((int)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > strlen(s) - start)
		len = strlen (s) - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (len > i)
	{
		substr[i] = s[start + i];
		i++;
	}
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
