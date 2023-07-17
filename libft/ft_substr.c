/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fT_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:28:53 by yozden            #+#    #+#             */
/*   Updated: 2023/07/15 14:28:56 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;
	int		i2;

	i2 = start;
	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (len != 0)
	{
		dest[i++] = s[i2++];
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
