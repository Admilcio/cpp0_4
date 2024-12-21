# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using namespace std;

class Zombie
{
  private:
          string  _Name;
  public:
          Zombie();
          ~Zombie();
          void announce();
          string getname();
          void setname(string Name); 
};
Zombie* zombieHorde(int N, string name);

#endif