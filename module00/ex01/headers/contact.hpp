#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using namespace std;

class Contact
{
    private:
        std::string		_first_name;
        std::string		_last_name;
        std::string		_nicke_name;
        std::string		_darkest_secret;
        std::string		_phone_number;
    public:
        Contact(){};
        ~Contact(){};
        std::string		get_first_name();
        std::string		get_last_name();
        std::string		get_nicke_name();
        std::string		get_darkest_secret();
        std::string		get_phone_number();

        void  		set_first_name(std::string firstname);
        void  		set_last_name(std::string lastname);
        void  		set_nicke_name(std::string nickename);
        void  		set_darkest_secret(std::string darkestsecret);
        void        set_phone_number(std::string phonenumber);
};
#endif