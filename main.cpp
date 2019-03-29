#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class  Student{
    private:
        string name;
        string first_name;
        string group;
        int year_birth;
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
    cout << "2. First name : " << getFirstName() << endl;
    cout <<"3. Group : " << getGroup() << endl;
    cout <<"4. Year of birth : " << getYearBirth() << endl;
}


class Complex{
    public:
    double read_number;
    double virtual_number;
    //string s;
    Complex(double re = 0.0, double  = 0.0);
    void importComplex(double re, double img);
    void exportComplex();
    Complex sumTwoComplexNumbers(Complex comp);
    Complex effxectTwoComplexNumbers(Complex comp);
    Complex calculatesTwoComplexNumbers(Complex comp);
};
Complex :: Complex(double re, double img){
    read_number = re;
    virtual_number = img;
}
void Complex :: importComplex(double re = 0, double img = 0){
    read_number = re;
    virtual_number = img;
}
void Complex :: exportComplex(){
    cout << read_number;
    if(virtual_number < 0){
        cout << " - ";
    }
    else{
        cout <<" + ";
    }
    cout << abs(virtual_number) << 'i' << endl;

}
Complex Complex ::sumTwoComplexNumbers(Complex comp){
    Complex comp_sum(0,0);
    comp_sum.read_number = read_number + comp.read_number;
    comp_sum.virtual_number = virtual_number + comp.virtual_number;
    return comp_sum;
}
Complex Complex ::effxectTwoComplexNumbers(Complex comp){
    Complex comp_eff(0,0);
    comp_eff.read_number = read_number - comp.read_number;
    comp_eff.virtual_number = virtual_number - comp.virtual_number;
    return comp_eff;
}
Complex Complex ::calculatesTwoComplexNumbers(Complex comp){
    Complex comp_cal(0,0);
    comp_cal.read_number = read_number*comp.read_number - virtual_number*comp.virtual_number;
    comp_cal.virtual_number = read_number * comp.virtual_number + virtual_number*comp.read_number;
    return comp_cal;
}

void fvector(){
    vector<Student> ls;
    ls.push_back(*(new Student()));
    ls.push_back(*(new Student("Danh", "Nguyen", "ivbo-08-18", 1998)));
    ls.push_back(*(new Student("Tai", "Tran", "10B", 2003)));
    int i = 0;
    vector<Student>::iterator it = ls.begin();
    while(it != ls.end()){
        ls.at(i).displayStudent();
        ++it;
        ++i;
    }
    ls.clear();
}
void flist(){
    int i = 0;

    list <Complex> lc;
    lc.push_back(*(new Complex(2.2, -3.1)));
    lc.push_back(*(new Complex(4.3, 5.1)));
    lc.push_back(*(new Complex(-6.4, 2.7)));
    list<Complex> :: iterator it = lc.begin();
    ++it;
    lc.insert(it,2,*(new Complex(-7.4, 1.6)));
    cout << "\n*Complex " << endl;
    while(!lc.empty()){
        cout << "Z" << i << " = ";
        (lc.front()).exportComplex();
        lc.pop_front();
        ++i;
    }
    lc.clear();
}
void fqueue(){
    int i = 0;
    queue <Complex> lq;
    lq.push(*(new Complex(5.2, -3.2)));
    lq.push(*(new Complex(1.3, 7.1)));
    lq.push(*(new Complex(-1.4, 2.9)));
    cout << "\n*Complex " << endl;
    while(!lq.empty()){
        cout << "Z" << i << " = ";
        (lq.front()).exportComplex();
        lq.pop();
        ++i;
    }
}
int main()
{
    fvector();
    flist();
    fqueue();
    return 0;
}
