#include "Zombie.hpp"

void randomChump(string name )
{
	Zombie *zom;

	zom = newZombie(name);
	zom->announce();
	delete zom;
}