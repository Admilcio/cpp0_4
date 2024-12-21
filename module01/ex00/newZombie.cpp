#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zom;

	zom = new Zombie;
	zom->setname(name);
	return (zom);
}