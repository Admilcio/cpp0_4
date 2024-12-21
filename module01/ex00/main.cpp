#include "Zombie.hpp"

int main()
{
	int nbr;
	int i;

	cout << "Enter number of Zombie to Create (int) : ";
	cin >> nbr;
	cin.ignore();

	if (cin.fail())
		cout << "Wrong input!\n";
	else
	{
		i = 0;
		string name[nbr];
		while (i < nbr)
		{
			cout << "Name of Zombie number " << i + 1 << "/" << nbr << ": ";
			getline(cin, name[i]);
			i++;
		}
		cout << "-----------------------------------------------------------" << endl;
		i = 0;
		randomChump(name[rand() % nbr]);
	}
	return (0);
}