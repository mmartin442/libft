/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:13 by mmartin4          #+#    #+#             */
/*   Updated: 2024/04/30 19:32:14 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= '>')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d", ft_tolower('B'));
    return 0;
}
*/
