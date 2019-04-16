#include "student.h"
//#include "iostream"

//using namespace std;
void Student::Human()
{
    //this -> Human::Human();

    this->surname = "";
    this->name = "";
    this->midname = "";
    this->age = 0;
    this->on_lesson = true;
}
void Student::Human(string surname, string name, string midname, int age, bool on_lesson)
{
    //this -> Human :: Human(surname, name, midname, age)
    this->surname = surname;
    this->name = name;
    this->midname = midname;
    this->age = age;
    this -> on_lesson = on_lesson;
}

void Student::print()
{
    this->Human::print();
    if(this->on_lesson)
    {
        cout << " +On lesson : Ok " << endl;
    }
    else
    {
        cout << " +On lesson : No " << endl;
    }
}
Student :: Student(string surname, string name, string midname, int age, bool on_lesson)
{
    this->surname = surname;
    this->name = name;
    this->midname = midname;
    this->age = age;
    this->on_lesson = on_lesson;

}
Student :: ~Student()
{
    delete(this);
}

