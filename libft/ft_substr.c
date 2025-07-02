/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiftyblue <fiftyblue@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:28:57 by achiu             #+#    #+#             */
/*   Updated: 2024/03/18 08:23:10 by fiftyblue        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	size_t		i;
	size_t		s_len;

	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len - start;
	if (start + len > s_len)
		len = s_len - start;
	if (start > 0 && start >= s_len)
		len = 0;
	dst = malloc((len + 1) * sizeof(char));
	if (!s || !dst)
		return (0);
	i = 0;
	while (len-- && (size_t)start < s_len && s[i])
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

// int	main()
// {
// 	printf("%s\n", ft_substr("hola", 2, 30));
// }
// according to fsoares, would have to malloc the exact space in order to pass