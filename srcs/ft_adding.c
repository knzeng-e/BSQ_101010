/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adding.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:11:05 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/23 03:52:07 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_adding(char **tab, t_map *map)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < map->nb_lines)
	{
		j = 1;
		while (j < map->nb_columns)
		{
			if (tab[i][j] != '0')
				map->tempon[i][j] = 1 + (find_minimum2(map->tempon[i - 1][j], \
							map->tempon[i][j - 1], map->tempon[i - 1][j - 1]));
			j++;
		}
		i++;
	}
}
