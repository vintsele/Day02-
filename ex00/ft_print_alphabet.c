/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintsele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:26:35 by vintsele          #+#    #+#             */
/*   Updated: 2020/07/10 13:46:24 by vintsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
