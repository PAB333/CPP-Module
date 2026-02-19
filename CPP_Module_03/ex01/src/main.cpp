/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:46:01 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/18 17:51:49 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("a");
	ScavTrap b("b");

	a.attack("TARGET");
	a.takeDamage(3);
	a.beRepaired(3);
	a.guardGate();

	ScavTrap c(a);

	b = a;
	b.guardGate();
	return (0);
}
