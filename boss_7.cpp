#include "boss.h"
#include <iostream>

using namespace std;
Boss::Boss()
{
    this->surname = "";
    this->name = "";
    this->midname = "";
    this->age = 0;
    this->number_of_worker = 0;
}

Boss::Boss(string surname, string name, string midname, int age, int number_of_worker)
{
    this->surname = surname;
    this->name = name;
    this->midname = midname;
    this->age = age;
    this->number_of_worker = number_of_worker;
}

void Boss::print()
{
    cout << "*Print" << endl;
    cout << " +Surname :"<< surname << endl;
    cout << " +Name : " << name << endl;
    cout << " +Midname : " << midname << endl;
    cout << " +Age : " << age << endl;
    cout << " +Number of worker: " << number_of_worker << endl;

}
Boss::~Boss()
{
    delete(this);
}
