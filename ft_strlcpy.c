/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:58 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/09 19:12:29 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	i;

	i = 0;
	slen = 0;
	if (!dst || !src)
		return (0);
	while (src[slen] != 0)
		slen++;
	if (dstsize == 0)
		return (slen);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
/*
int main() 
{
    char src[] = "123456789 123";
    char dst1[6], dst2[6];
    size_t len1, len2;

    // Copia usando tu función ft_strlcpy
    len1 = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("Resultado usando ft_strlcpy:\n");
    printf("Cadena de destino: %s\n", dst1);
    printf("Longitud de la cadena copiada: %zu\n\n", len1);

    // Copia usando la función original strlcpy
    len2 = strlcpy(dst2, src, sizeof(dst2));
    printf("Resultado usando strlcpy:\n");
    printf("Cadena de destino: %s\n", dst2);
    printf("Longitud de la cadena copiada: %zu\n\n", len2);

    // Comparación de resultados
    if (len1 == len2 && strcmp(dst1, dst2) == 0) {
        printf("¡Ambas funciones produjeron el mismo resultado!\n");
    } else {
        printf("¡Las funciones produjeron resultados diferentes!\n");
    }
    return 0;
}
*/
