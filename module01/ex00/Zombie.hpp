# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using namespace std;

class Zombie
{
	private:
		string	_Name;
	public:
		Zombie();
		~Zombie();
		void			announce( void );
		string		getname();
		void			setname(string Name);
};

Zombie*	newZombie(string name );
void	randomChump(string name );

#endif