/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:24:17 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/28 17:36:40 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	std::cout << "### TESTING FRAGTRAP ###" << std::endl;
	FragTrap e;
	FragTrap f("Chadd");
	e.highFiveGuys();
	e.attack("some random dude");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("some random dude");
	f.highFiveGuys();
	// for(int i = 0; i < 101; i++)
	// 	f.attack("FragTrap-clone");
	return (0);
}
