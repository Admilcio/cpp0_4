#include "Zombie.hpp"


Zombie::Zombie()
{
	cout << "Constructor Called" << endl;
}

Zombie::~Zombie()
{
	cout << "The Zombie " << _Name << " Has Destructor" << endl;
}

string	Zombie::getname()
{
	return (_Name);
}

void	Zombie::setname(string Name)
{
	_Name = Name;
}

void	Zombie::announce( void )
{
	cout << _Name << " BraiiiiiiinnnzzzZ..." << endl;
}