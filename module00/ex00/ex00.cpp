#include <iostream>
#include <string>

using namespace std;

int main(int ac, char **av)
{
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
    {
        for(int i = 1; i < ac;i++)
        {
            string str = av[i];
            for(int j = 0; j < (int)str.length(); j++)
            {
                char c = toupper(str[j]);
                cout << c;
            }
            if(i < ac - 1)
                cout << " ";
        }
    }
}
