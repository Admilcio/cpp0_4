#include "contact.hpp"

std::string	Contact::get_first_name()
{
	return (this->_first_name);
}

std::string	Contact::get_last_name()
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name()
{
	return (this->_nick_name);
}

std::string	Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}

std::string	Contact::get_phone_number()
{
	return (this->_phone_number);
}

void	Contact::set_first_name(std::string firstname)
{
	this->_first_name = firstname;
}

void Contact::set_last_name(std::string lastname)
{
	this->_last_name = lastname;
}

void Contact::set_nick_name(std::string nickname)
{
	this->_nick_name = nickname;
}

void Contact::set_darkest_secret(std::string darkestsecret)
{
	this->_darkest_secret = darkestsecret;
}

void Contact::set_phone_number(std::string phonenumber)
{
	this->_phone_number = phonenumber;
}