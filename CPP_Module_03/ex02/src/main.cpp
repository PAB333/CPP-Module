/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:47:29 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 02:05:31 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	ClapTrap a("a");
	FragTrap b("b");

	a.attack("Target b");
	b.attack("Target a");
	b.highFivesGuys();
	b.takeDamage(50);
	b.beRepaired(20);

	return 0;
}