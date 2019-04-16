#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human
{
    public:
        void Human();
        void Human(string surname, string name, string midname, int age, bool on_lesson);
        void print();
        Student(string surname = "", string name = "", string midname = "", int age = 0, bool on_lesson = 0);
        ~Student();

    protected:

    private:
        bool on_lesson;

};

#endif // STUDENT_H
