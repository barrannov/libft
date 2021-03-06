/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:40:12 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/12 14:04:03 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			temp = (char *)&s[i];
			return (temp);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (char *)&s[i];
	}
	return (0);
}
