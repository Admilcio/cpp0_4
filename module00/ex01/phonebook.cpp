#include "phonebook.hpp"

Phonebook::Phonebook(){_current = 0;_index = 0;};
Phonebook::~Phonebook(){};

void    Phonebook::ft_display()
{
    std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|                  3-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
}

void	Phonebook::ft_add()
{
	Contact tmp;
	std::cout << "First Name: ";
	getline(std::cin, _firstname);
	tmp.set_first_name(_firstname);
	std::cout << "Last Name: ";
	getline(std::cin, _lastname);
	tmp.set_last_name(_lastname);
	std::cout << "Nickename: ";
	getline(std::cin, _nickname);
	tmp.set_nick_name(_nickname);
	std::cout << "Phone number: ";
	getline(std::cin, _phonenumber);
	tmp.set_phone_number(_phonenumber);
	std::cout << "Darkest Secret: ";
	getline(std::cin, _darkestsecret);
	tmp.set_darkest_secret(_darkestsecret);
	this->_contacts[_current % 8] = tmp;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
	std::cout << "CONTACT ADDED SUCCESSFULY" << std::endl;
}

std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	Phonebook::ft_display_contacts()
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(_contacts[i].get_first_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_last_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_nick_name()) << "|"
		<< std::endl;
	}
}

void	Phonebook::ft_search()
{
	unsigned int index;
	ft_display_contacts();
	std::cout << "Enter The index: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "INDEX INVALID !\n";
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contacts[index].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].get_last_name() << std::endl;
			std::cout << "NickeName: " << this->_contacts[index].get_nick_name() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "INDEX INVALID !\n";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
