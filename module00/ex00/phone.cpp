#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Contact {
private:
    static string _fields_name[5];
    string _informations[5];

    enum Field {
        FirstName = 0,
        LastName,
        NickName,
        PhoneNumber,
        DarkestSecret
    };

public:
    Contact() {}
    ~Contact() {}

    bool set_contact() {
        for (int i = FirstName; i <= DarkestSecret; ++i) {
            cout << "Enter " << _fields_name[i] << ": ";
            getline(cin, _informations[i]);

            if (i != DarkestSecret && _informations[i].empty()) {
                cerr << _fields_name[i] << " cannot be empty!" << endl;
                return false;
            }
        }
        return true;
    }

    void get_contact(int index) const {
        cout << setw(10) << index << " | "
             << setw(10) << _informations[FirstName] << " | "
             << setw(10) << _informations[LastName] << " | "
             << setw(10) << _informations[NickName] << endl;
    }

    void show_full_contact() const {
        cout << "First Name: " << _informations[FirstName] << endl;
        cout << "Last Name: " << _informations[LastName] << endl;
        cout << "Nickname: " << _informations[NickName] << endl;
        cout << "Phone Number: " << _informations[PhoneNumber] << endl;
        cout << "Darkest Secret: " << _informations[DarkestSecret] << endl;
    }
};

// Static field initialization
string Contact::_fields_name[5] = {"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};

class PhoneBook {
private:
    Contact _contacts[8];
    int _index;
    bool _full;

public:
    PhoneBook() : _index(0), _full(false) {}
    ~PhoneBook() {}

    void set_information() {
        if (_contacts[_index].set_contact()) {
            _index++;
            if (_index == 8)
            {
                _index = 0;
                _full = true;
            }
            cout << "Contact added successfully!" << endl;
        } else {
            cout << "Failed to add contact. Try again." << endl;
        }
    }

    void get_information() const {
        cout << setw(10) << "Index" << " | " << setw(10) << "First Name" << " | "
             << setw(10) << "Last Name" << " | " << setw(10) << "Nickname" << endl;
        cout << string(45, '-') << endl;

        int limit = _full ? 8 : _index;
        for (int i = 0; i < limit; ++i) {
            _contacts[i].get_contact(i + 1);
        }
    }

    void search_contact() const {
        get_information();
        cout << "\nEnter the index of the contact to view details: ";
        int index;
        cin >> index;
        cin.ignore();

        if (index < 1 || index > (_full ? 8 : _index)) {
            cerr << "Invalid index!" << endl;
        } else {
            _contacts[index - 1].show_full_contact();
        }
    }

    void show_instruction() const {
        cout << "\nAvailable commands:" << endl;
        cout << "1. ADD: Add a new contact." << endl;
        cout << "2. SEARCH: View and search contacts." << endl;
        cout << "3. EXIT: Exit the program." << endl;
    }
};

int main()
{
    PhoneBook phoneBook;
    string command;

    cout << "Welcome to PhoneBook 42!" << endl;

    while (true) {
        phoneBook.show_instruction();
        cout << "\nEnter your command: ";
        getline(cin, command);

        if (command == "ADD") {
            phoneBook.set_information();
        } else if (command == "SEARCH") {
            phoneBook.search_contact();
        } else if (command == "EXIT") {
            cout << "Exiting PhoneBook. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
