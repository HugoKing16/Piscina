/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartin2 <hmartin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:35:15 by hmartin2          #+#    #+#             */
/*   Updated: 2024/07/05 12:47:34 by hmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void main(void)
{
    char alfabeto;
    alfabeto = 'a';
    while (alfabeto <= 'z')
    {
        write(1, &alfabeto, 1);
        alfabeto++;
    }
}
