#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using namespace std;

class Contact
{
    private:
        string		_first_name;
        string		_last_name;
        string		_nick_name;
        string		_darkest_secret;
        string		_phone_number;
    public:
        Contact(){};
        ~Contact(){};
        string		get_first_name();
        string		get_last_name();
        string		get_nick_name();
        string		get_darkest_secret();
        string		get_phone_number();

        void  		set_first_name(string firstname);
        void  		set_last_name(string lastname);
        void  		set_nick_name(string nickename);
        void  		set_darkest_secret(string darkestsecret);
        void        set_phone_number(string phonenumber);
};
#endif