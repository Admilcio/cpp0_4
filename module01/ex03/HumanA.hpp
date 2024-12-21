#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		string	_Name;
		Weapon	&_Weapon;
	public:
		HumanA( string Name, Weapon &Weapon );
		~HumanA();
		void	attack();
		string	getName();
		void	setName( string Name );
};

#endif