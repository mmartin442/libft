/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:31:30 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/09 18:07:19 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/*int main()
{
	size_t count = 5;
	size_t size = sizeof(int);
	
	int *ptr = (int *)ft_calloc(count, size);
	if (ptr == NULL) {
        printf("La asignación de memoria ha fallado.\n");
        return 1;
	}
	printf("La asignación de memoria ha sido exitosa.\n");
	free(ptr);
	return 0;
}
*
* Tenía puesto esto para comprobar el desbordamiento lo siguiente:
 * maxcount = SIZE_MAX / size;
	if (count > maxcount)
		return (NULL);
 *
 * con el count > maxcount miramos que no haya desbordamiento. 
 * Luego asignamos memoria con malloc y comprobamos que haya sido asiganada
 * Si no, NULL.
 * y luego inicializamos la memoria a cero.*/
