#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name )
{
	Zombie * zom;

	zom = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zom[i].setname(name);
		zom[i].announce();
	}
	return (zom);
}