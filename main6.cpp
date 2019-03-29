#include <iostream>
#include <string.h>

using namespace std;

class  Student{
    private:
        string name;
        string first_name;
        string group;
        short year_birth;
    public:
        Student(string name = "Tu", string first_name = "Tran", string group = "ikbo-13-18", int year_birth = 1998);
        void setName(string name);
        string getName();

        void setFirstName(string first_name);
        string getFirstName();

        void setGroup(string group);
        string getGroup();

        void setYearBirth(int year_birth);
        int getYearBirth();

        void importStudent();
        void displayStudent();

};

void Student :: setName(string name){
    this->name = name;
}

string Student :: getName(){
    return this->name;
}


void Student :: setFirstName(string first_name){
    this->first_name = first_name;
}

string Student :: getFirstName(){
    return this->first_name;
}

void Student :: setGroup(string group){
    this->group = group;
}
string Student :: getGroup(){
    return this->group;
}

void Student :: setYearBirth(int year_birth){
    this->year_birth = year_birth;
}


int Student :: getYearBirth(){
    return this->year_birth;
}

Student :: Student(string name, string first_name, string group, int year_birth){
    this->setName(name);
    this->setFirstName(first_name);
    this->setGroup(group);
    this->setYearBirth(year_birth);
}

void Student :: importStudent(){
    cout << "*Import" << endl;
    cout << "+ Name : ";
    cin >> this->name;

    cout << "+ Firsr name : ";
    cin >> this->first_name;

    cout <<"+ Group : ";
    cin >> this->group;

    cout <<"+ Year of birth : ";
    cin >> this->year_birth;

}
void Student ::  displayStudent(){
    cout << "*Display" << endl;
    cout << "1. Name : " << getName() << endl;
    cout << "2. Firsr name : " << getFirstName() << endl;
    cout <<"3. Group : " << getGroup() << endl;
    cout <<"4. Year of birth : " << getYearBirth() << endl;
}

class Monitor : public Student{
    private:
        short number;

    public:
        Monitor(string name = "Tu", string first_name = "Tran", string group = "ikbo-13-18", short year_birth = 1998, short number = 0);
        void setNumber(short number);
        short getNumber();
        void importStudent();
        void displayStudent();

};

void Monitor :: setNumber(short number){
    this->number = number;
}

short Monitor :: getNumber(){
    return this->number;
}


void Monitor :: importStudent(){
    this->Student::importStudent();
    cout <<"+ Number : " ;
    cin >> this->number;
}

void Monitor :: displayStudent(){
    this -> Student :: displayStudent();
    cout << "6. Number : " << getNumber() << endl;
}

Monitor::Monitor(string name, string first_name, string group, short year_birth, short number){
    this->setName(name);
    this->setFirstName(first_name);
    this->setGroup(group);
    this->setYearBirth(year_birth);
    this->setNumber(number);
}
int main()
{
    Student *student1 = new Student();
    Monitor *monitor1 = new Monitor();
    cout << "*Student"<< endl;
    student1->importStudent();
    cout << "*Monitor"<< endl;
    monitor1->importStudent();
    cout << endl<< endl;
    cout << "*Student"<< endl;
    student1->displayStudent();
    cout << "*Monitor"<< endl;
    monitor1->displayStudent();
    //cout << "Hello world!" << endl;
    return 0;
}

