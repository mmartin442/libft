/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:15 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/22 16:07:04 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;

	temp_dst = (char *) dst;
	temp_src = (char *) src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*temp_dst++ = *temp_src++;
	}
	return (dst);
}
/*
int	main(void)
{
	char src[] = "Hola, egun on";
	char dst[20] = "";
	
	memcpy(dst, src, 6);
	printf("Using memcpy: %s\n", dst);

	memset(dst, 0, sizeof(dst));

	ft_memcpy(dst, src, 6);
	printf("Using ft_memcpy: %s\n", dst);
}
*/
