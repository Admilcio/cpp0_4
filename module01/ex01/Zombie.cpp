#include "Zombie.hpp"

Zombie::Zombie()
{
  cout << "Constructor called" << endl;
}

Zombie::~Zombie()
{
  cout << "The Zombie " << this->_Name << " Has Destructor" << endl;
}

string	Zombie::getname()
{
	return (this->_Name);
}

void	Zombie::setname(string Name)
{
	this->_Name = Name;
}

void	Zombie::announce()
{
	cout << this->_Name << " BraiiiiiiinnnzzzZ..." << endl;
}