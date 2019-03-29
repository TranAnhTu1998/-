#ifndef BOSS_H
#define BOSS_H
#include "Human.h"
//using namespace std;
class Boss : public Human
{
    public:
        Boss();
        Boss(string surname, string name, string midname, int age, int number_of_worker);
        void print();
        virtual ~Boss();


    protected:

    private:
        int number_of_worker;
};

#endif // BOSS_H
