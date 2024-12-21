#include "Weapon.hpp"

Weapon::Weapon(string Type)
{
	this->_Type = Type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

string const &Weapon::getType()
{
	return this->_Type;
}

void	Weapon::setType( string _type)
{
	this->_Type = _type;
}