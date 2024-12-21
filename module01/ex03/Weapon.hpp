#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
using namespace std;

class Weapon
{
	private:
		string _Type;
	public:
		Weapon( string Type );
		~Weapon();
		string const	&getType();
		void			setType( string Type );
};

#endif