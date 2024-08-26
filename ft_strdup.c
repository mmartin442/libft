/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:24:11 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/21 17:42:50 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	size_t	i;

	newstr = (char *) malloc(ft_strlen(s1) + 1);
	i = 0;
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main() {
    const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);

    if (copia == NULL) {
        printf("La función ft_strdup ha fallado al asignar memoria.\n");
        return 1;
    }
    printf("La copia del string es: %s\n", copia);
    free(copia);
    return 0;
}
*/
