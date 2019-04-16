#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>

using namespace std;
class Human
{
    public:
        Human();
        Human(string surname, string name, string midname, int age);
        virtual void print() = 0;
        virtual ~Human();
    protected:

    protected:
        string surname;
        string name;
        string midname;
        int age;

};
#endif // HUMAN_H

