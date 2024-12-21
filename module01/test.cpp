#include <iostream>
#include <string>

using namespace std;

class Phone {
  private:
  string _name;
  string _job;
  int _age;

  public:
  Phone(string name, string job, int age) : _name(name), _job(job), _age(age) {}
  void display()
  {
    cout << _name << " is " << _age << " and works as " << _job << endl;
  }

};

int main()
{
  Phone phone1("John", "driver", 34);
  phone1.display();
}