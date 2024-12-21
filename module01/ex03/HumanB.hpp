#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		string	_Name;
		Weapon	*_Weapon;
	public:
		HumanB( string Name );
		~HumanB();
		void	attack();
		string	getName();
		void	setName( string Name );
		void	setWeapon( Weapon &Weapon );
};

#endif