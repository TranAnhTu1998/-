#include <iostream>
#include <cmath>
#include <string.h>
#define pi 3.14
using namespace std;
char name_defaut[3] = "Tu";
char firt_name_defaut[5] = "Tran";
struct Child{
    private:
        char name[10];
        char firt_name[10];
        int age;

    public:
        Child (char *name = name_defaut, char *firt_name  = firt_name_defaut, int age = 1){
            strcpy(this->name, name);
            strcpy(this->firt_name, firt_name);
            this->age = age;
        }

        ~Child(){
            strcpy(name , name_defaut);
            strcpy(firt_name, firt_name_defaut);
            age = 1;
        }

        void importChild(){
            cout <<"* Name: ";
            cin >> name;
            cout <<"* Firt name: ";
            cin >> firt_name;
            cout << "* Age: ";
            cin >> age;
        }

        void dispayChild(){
            cout <<"+ " << name << endl;
            cout <<"+ "<< firt_name << endl;
            cout << "+ " << age << endl;
        }


};
struct Tiles{
    public:
        string brand;
        float size_h;
        float size_w;
        float price;

        Tiles (string brand = "BBB", float size_h = 2.2, float size_w = 3.3, float price = 0.125) :
            brand(brand), size_h(size_h), size_w(size_w), price(price){
            /*strcpy(this->brand, brand);
            this->size_h = size_h;
            this->size_w = size_w;
            this->price  = price;*/
        }

        ~Tiles(){
            brand = "BBB";
            size_h = 2.2;
            size_w = 3.3;
            price = 0.125;
        }
        void importData(){
            //cout << "-Impor"
            cout <<"* Brand: ";
            cin >> brand;
            cout <<"* Size high: ";
            cin >> size_h;
            cout << "* Size width: ";
            cin >> size_w;
            cout << "* Price: ";
            cin >> price;
        }
        void getData(){
            //cout <<
            cout <<"+ " << brand << endl;
            cout <<"+ "<< size_h << endl;
            cout << "+ " << size_w << endl;
            cout << "+ " << price << endl;
        }
};
struct complex_number{
    public:
    double read_number;
    double virtual_number;

    complex_number(const double& re, const double& img){
        read_number = re;
        virtual_number = img;
    }

    ~complex_number(){
        read_number = 0;
        virtual_number = 0;
    }

    void importComplex(double re, double img){
        read_number = re;
        virtual_number = img;
    }

    double modulComplex(){
        return sqrt(read_number*read_number + virtual_number*virtual_number);
    }

    double agumentComplex(){

        if(read_number == 0){
            return pi/2;
        }
        else{
            double agm = atan(virtual_number/read_number);
            if(read_number >= 0){
                return agm;
            }
            else if( virtual_number < 0){
                return agm - pi;
            }
            else{
                return agm + pi;
            }
        }
    /*void exportComplex();
    complex_number sumTwoComplexNumbers(complex_number comp);
    complex_number effxectTwoComplexNumbers(complex_number comp);
    complex_number calculatesTwoComplexNumbers(complex_number comp);*/
    }


};
struct Vector{
    private:
    double a1;
    double a2;

    public:
    Vector(const double& a1 = 0.0, const double& a2 = 0.0) : a1(a1), a2(a2){
        //this->a1 = a1;
        //this->a2 = a2;
    }

    ~Vector(){
        a1 = 0;
        a2 = 0;
    }
    void importVector(double x = 0, double y = 0){
        a1 = x;
        a2 = y;
    }

    void displayVecto(){
        cout << "(" << a1 << "," << a2 << ")";
    }

    double Modul(){
        return sqrt(a1*a1 + a2*a2);
    }

Vector additionVector(Vector v1, Vector v2){
    Vector s;
    s.a1 = v1.a1 + v2.a1;
    s.a2 = v1.a2 + v2.a2;
    return s;
}
Vector subtractionVector(Vector v1, Vector v2){
        Vector h(v1.a1 - v2.a1, v1.a2 - v2.a2);
        return h;
    }
};
//int F1::F1_2 = 2;
void E2(){
    cout << "Exersion 2"<< endl;
    Tiles ti1, ti2;

    cout << "-Import" << endl;
    cout << "1.Tiles fires" << endl;
    ti1.importData();
    cout << "2.Tiles second" << endl;
    ti2.importData();

    cout << "-Desplay" << endl;
    cout << "1.Tiles fires" << endl;
    ti1.getData();
    cout << "2.Tiles second" << endl;
    ti2.getData();

    ti1.~Tiles();
    ti2.~Tiles();
}
void E1(){
    Child chi1, chi2;
    cout << "-Import" << endl;
    cout << "1. Child first: " << endl;
    chi1.importChild();
    cout << "\n2. Child second: " << endl;
    chi2.importChild();
    cout << "-Display" << endl;
    cout << "Child first: " << endl;
    chi1.dispayChild();
    chi1.~Child();
    chi1.dispayChild();
    cout << "\nChild second: " << endl;
    chi2.dispayChild();

    chi1.~Child();
    chi2.~Child();
}
void E3(){
    cout << "Exer 3" << endl;
    double x, y;
    cout << "-Import" << endl;
    cout << "Re: ";
    cin >> x;
    cout << "Im: ";
    cin >> y;
    complex_number cml1(x, y);
    cout<< "Modul: " << cml1.modulComplex() << endl;
    cout<< "Agument: " << cml1.agumentComplex() << endl;

    cml1.~complex_number();
}
void E4(){
    double x, y;
    cout << "Enter vecto 1: ";
    cin >> x >> y;
    Vector *v1 = new Vector(x, y);

    cout << "Enter vecto 2: ";
    cin >> x >> y;
    Vector *v2 = new Vector(x, y);

    cout << "Vector 1 = ";
    v1->displayVecto();
    cout << "\nModul Vector 1 = " << v1->Modul() << endl;

    cout << "Vector 2 = ";
    v2->displayVecto();
    cout << "\nModul Vector 2 = " << v2->Modul() << endl;
    cout << "Vector 1 + Vector 2  = ";
    v1->additionVector(*v1, *v2).displayVecto();
    cout << endl;
    cout << "Vector 1 - Vector 2  = " ;
    v1->subtractionVector(*v1, *v2).displayVecto();
    cout << endl;

    //v1->~Vector();
    //v2->
}

int main()
{

    int i;
    while(1){
        cout << "Selective: ";
        cin >> i;
        switch(i){
            case 1:
                E1();
            break;

            case 2:
                E2();
            break;

            case 3:
                E3();
            break;

            case 4:
                E4();
            break;

            default: cout << "Invalid data!"<< endl;
        }
    }
    return 0;
}


