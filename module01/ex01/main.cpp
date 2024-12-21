#include "Zombie.hpp"

int main()
{
	Zombie *zom;
	string name;
	int nbr;

	cout << "Enter number of Zombies in your horde (int) : ";
	cin >> nbr;
	cin.ignore();
	if (cin.fail())
	{
		cout << "Wrong input!\n";
		return (1);
	}
	cout << "Name of your Zombies: ";
	getline(cin, name);
	zom = zombieHorde(nbr, name);
	delete [] zom;
	return (0);
}