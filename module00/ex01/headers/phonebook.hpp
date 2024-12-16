#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "contact.hpp"
#include <climits>
using namespace std;

class Phonebook
{
    private:
        Contact _contacts[8];
        unsigned int     _current;
        unsigned int     _index;
        std::string  _firstname;
        std::string  _lastname;
        std::string  _nickename;
		std::string	_darkestsecret;
		std::string	_phonenumber;
    public:
        Phonebook();
        ~Phonebook(){};
        void	ft_add();
        void	ft_search();
		void	ft_display_contacts();
};

#endif