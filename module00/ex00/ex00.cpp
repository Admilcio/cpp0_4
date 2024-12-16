#include <iostream>
#include <string>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    while (i < ac)
    {
        int j = 0;
        while (av[i][j])
        {
            cout << (char)toupper(av[i][j]);
            j++;
        }
        cout << " ";
        i++;
    }
    cout << endl;
    return 0;
}
