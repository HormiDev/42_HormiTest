/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatigarc <>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:05:54 by fatigarc          #+#    #+#             */
/*   Updated: 2023/11/12 21:11:34 by ide_dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
char	get_char(int x, int y, int contx, int conty);

void	rush(int x, int y)
{
	int	contx;
	int	conty;

	if (x < 0 || y < 0)
	{
		return ;
		//write(1, "¡Eh, los números negativos no son bienvenidos aquí! 😄\n", 59);
	}
	else
	{
		contx = 0;
		conty = 0;
		while (conty < y)
		{
			contx = 0;
			while (contx < x)
			{
				ft_putchar(get_char(x, y, contx, conty));
				contx++;
			}
			conty++;
			ft_putchar('\n');
		}
	}
}

// get_char para rush03

char	get_char(int x, int y, int contx, int conty)
{
	if (conty > 0 && conty < y - 1 && contx > 0 && contx < x - 1)
		return (' ');
	else if (contx == 0 && conty == 0)
		return ('A');
	else if (contx == x - 1 && conty == 0)
		return ('C');
	else if (contx == 0 && conty == y - 1)
		return ('A');
	else if (contx == x - 1 && conty == y - 1)
		return ('C');
	else
		return ('B');
	return ('@');
}
