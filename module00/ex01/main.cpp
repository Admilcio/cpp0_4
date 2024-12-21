#include "phonebook.hpp"

int main()
{
    Phonebook Phonebook;
    std::string command;

    Phonebook.ft_display();
    while (1)
    {
        std::cout << "Select a command > ";
        getline(std::cin, command);
        if (command == "ADD")
          Phonebook.ft_add();
        else if (command == "SEARCH")
					Phonebook.ft_search();
        else if (command == "EXIT")
				{
					std::cout << "GOOD BYE" << std::endl;
					break;
				}
        else
            std::cout << "COMMAND NOT FOUND!" << std::endl;
    }
}