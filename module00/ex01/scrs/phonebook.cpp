#include "../headers/phonebook.hpp"

Phonebook::Phonebook(){_current = 0;_index = 0;};

void    ft_display()
{
    cout << "+----------------PHONEBOOK----------------+" << endl;
    cout << "|                  1-ADD                  |" << endl;
    cout << "|                 2-SEARCH                |" << endl;
    cout << "|                  3-EXIT                 |" << endl;
    cout << "+-----------------------------------------+" << endl;
}

void	Phonebook::ft_add()
{
	Contact tmp;
	cout << "First Name: ";
	getline(cin, _firstname);
	tmp.set_first_name(_firstname);
	cout << "Last Name: ";
	getline(cin, _lastname);
	tmp.set_last_name(_lastname);
	cout << "Nickename: ";
	getline(cin, _nickename);
	tmp.set_nicke_name(_nickename);
	cout << "Phone number: ";
	getline(cin, _phonenumber);
	tmp.set_phone_number(_phonenumber);
	cout << "Darkest Secret: ";
	getline(cin, _darkestsecret);
	tmp.set_darkest_secret(_darkestsecret);
	this->_contacts[_current % 2] = tmp;
	this->_current++;
	if (this->_current <= 2)
		this->_index = this->_current;
	cout << "CONTACT ADDED SUCCESSFULY" << endl;
}

string	resize(string content)
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
	cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		cout
		<< "|" << setw(10) << i
		<< "|" << setw(10) << resize(_contacts[i].get_first_name())
		<< "|" << setw(10) << resize(_contacts[i].get_last_name())
		<< "|" << setw(10) << resize(_contacts[i].get_nicke_name()) << "|"
		<< endl;
	}
}

void	Phonebook::ft_search()
{
	unsigned int index;
	ft_display_contacts();
	cout << "Enter The index: ";
	cin >> index;
	if (cin.fail())
		cout << "INDEX INVALID !\n";
	else
	{
		if (index < this->_index)
		{
			cout << "First Name: " << this->_contacts[index].get_first_name() << endl;
			cout << "Last Name: " << this->_contacts[index].get_last_name() << endl;
			cout << "NickeName: " << this->_contacts[index].get_nicke_name() << endl;
			cout << "Phone Number: " << this->_contacts[index].get_phone_number() << endl;
			cout << "Darkest Secret: " << this->_contacts[index].get_darkest_secret() << endl;
		}
		else
			cout << "INDEX INVALID !\n";
	}
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main()
{
    Phonebook Phonebook;
    string command;

    ft_display();
    while (1337)
    {
        cout << "Select a command > ";
        getline(cin, command);
        if (command == "ADD")
            Phonebook.ft_add();
        else if (command == "SEARCH")
			Phonebook.ft_search();
        else if (command == "EXIT")
		{
			cout << "GOOD BYE" << endl;
			break;
		}
        else
        {
            cout << "COMMAND NOT FOUND!" << endl;
        }
    }
}