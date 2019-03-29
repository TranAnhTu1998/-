#include "Human.h"
#include <iostream>
using namespace std;
Human::Human()
{
    this->surname = "";
    this->name = "";
    this->midname = "";
    this->age = 0;
}

Human ::Human(string surname, string name, string midname, int age)
{
    this->surname = surname;
    this->name = name;
    this->midname = midname;
    this->age = age;

}

void Human :: print()
{
    cout << "Print" << endl;
    cout << " +Surname :"<< surname << endl;
    cout << " +Name : " << name << endl;
    cout << " +Midname : " << midname << endl;
    cout << " +Age : " << age << endl;
}

Human::~Human()
{
    delete(this);
}
