/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:20 by mmartin4          #+#    #+#             */
/*   Updated: 2024/04/30 19:31:29 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;

	temp_dst = (char *) dst;
	temp_src = (char *) src;
	i = 0;
	if (!dst || !src)
		return (NULL);
	else if (dst > src)
		while (i < len--)
			temp_dst[len] = temp_src[len];
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
    char src[] = "Egun on, gabon";
    char dst1[6];
	char dst2[6];
	
	ft_memmove(dst1, src, 6);
	memmove(dst2, src, 6);

	printf("dst1: %s\n", dst1);
    printf("dst2: %s\n", dst2);
}
*/
