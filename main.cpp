#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;
struct Child{
    private:
        char name[10];
        char firt_name[10];
        int age;

    public:
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
        char brand[20];
        float size_h;
        float size_w;
        float price;

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

    complex_number(double re, double img){
        read_number = re;
        virtual_number = img;
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
    double a;
    double b;

    public:
    Vector(double x = 0.0, double y = 0.0){
        a = x;
        b = y;
    }

    void importVecto(double x = 0, double y = 0){
        a = x;
        b = y;
    }

    void displayVecto(){
        cout << "(" << a << "," << b << ")";
    }

    double Modul(){
        return sqrt(a*a + b*b);
    }

Vector addition(Vector v1, Vector v2){
    Vector s;
    s.a = v1.a + v2.a;
    s.b = v1.b + v2.b;
    return s;
}
Vector subtraction(Vector v1, Vector v2){
        Vector h;
        h.a = v1.a - v2.a;
        h.b = v1.b - v2.b;
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
    cout << "\nChild second: " << endl;
    chi2.dispayChild();
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

}
void E4(){
    double x, y;
    cout << "Enter vecto 1: ";
    cin >> x >> y;
    Vector v1(x, y);

    cout << "Enter vecto 2: ";
    cin >> x >> y;
    Vector v2(x, y);

    cout << "Vector 1 = ";
    v1.displayVecto();
    cout << "\nModul Vector 1 = " << v1.Modul() << endl;

    cout << "Vector 2 = ";
    v2.displayVecto();
    cout << "\nModul Vector 2 = " << v2.Modul() << endl;
    cout << "Vector 1 + Vector 2  = ";
    v1.addition(v1,v2).displayVecto();
    cout << endl;
    cout << "Vector 1 - Vector 2  = " ;
    v1.subtraction(v1,v2).displayVecto();
    cout << endl;

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


