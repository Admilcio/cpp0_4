#include "../headers/contact.hpp"

string	Contact::get_first_name()
{
	return (this->_first_name);
}

string	Contact::get_last_name()
{
	return (this->_last_name);
}

string	Contact::get_nicke_name()
{
	return (this->_nicke_name);
}

string	Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}

string	Contact::get_phone_number()
{
	return (this->_phone_number);
}

void	Contact::set_first_name(string firstname)
{
	this->_first_name = firstname;
}

void Contact::set_last_name(string lastname)
{
	this->_last_name = lastname;
}

void Contact::set_nicke_name(string nickename)
{
	this->_nicke_name = nickename;
}

void Contact::set_darkest_secret(string darkestsecret)
{
	this->_darkest_secret = darkestsecret;
}

void Contact::set_phone_number(string phonenumber)
{
	this->_phone_number = phonenumber;
}