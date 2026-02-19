/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:45:14 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/17 21:25:31 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap fortytwo("fortytwo");

	for (int i = 0; i < 3; i++)
		fortytwo.attack("Target");
	fortytwo.takeDamage(6);
	fortytwo.beRepaired(2);
}
