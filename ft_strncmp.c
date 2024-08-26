/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:06 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/22 15:27:32 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main(void)
{
    const char *s1 = "Egun on";
    const char *s2 = "Egun nn";
    size_t n = 9;

    int result_ft = ft_strncmp(s1, s2, n);
    int result_std = strncmp(s1, s2, n);

    printf("Resultado de ft_strncmp: %d\n", result_ft);
    printf("Resultado de strncmp: %d\n", result_std);

    if (result_ft == result_std)
    {
        printf("Los resultados son iguales.\n");
    }
    else
    {
        printf("Los resultados son diferentes.\n");
    }

    return 0;
}
*/
