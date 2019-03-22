#include <iostream>
#include <math.h>

using namespace std;


class ComplexNumber{
    public:
    double read_number;
    double virtual_number;

    ComplexNumber(double re = 0.0, double img = 0.0);
    ComplexNumber(const ComplexNumber& cpl_x);
    void importComplex(double re, double img);
    void exportComplex();
    friend const ComplexNumber operator +(ComplexNumber cpl_x);
    friend const ComplexNumber operator +(ComplexNumber cpl_x, ComplexNumber cpl_y);
    friend const ComplexNumber operator -(ComplexNumber cpl_x);
    friend const ComplexNumber operator -(ComplexNumber cpl_x, ComplexNumber cpl_y);
    friend const ComplexNumber operator ++(ComplexNumber& cpl_x);//префиксный
    friend const ComplexNumber operator ++(ComplexNumber& cpl_x, int);//
    friend const ComplexNumber operator --(ComplexNumber& cpl_x);//
    friend const ComplexNumber operator --(ComplexNumber& cpl_x, int);//
    friend const ComplexNumber operator +=(ComplexNumber& cpl_x, ComplexNumber cpl_y);//
    friend const ComplexNumber operator -=(ComplexNumber& cpl_x, ComplexNumber cpl_y);//
    //friend const ComplexNumber operator *=(ComplexNumber& cpl_x, int);//
    friend const bool operator ==(ComplexNumber cpl_x, ComplexNumber cpl_y);//

    /*complex_number sumTwoComplexNumbers(complex_number comp);
    complex_number effxectTwoComplexNumbers(complex_number comp);
    complex_number calculatesTwoComplexNumbers(complex_number comp);*/
};

ComplexNumber :: ComplexNumber(double re, double img){
    this->read_number = re;
    this->virtual_number = img;
}

ComplexNumber :: ComplexNumber(const ComplexNumber& cpl_x){
    *this = cpl_x;
}

void ComplexNumber :: importComplex(double re, double img){
    read_number = re;
    virtual_number = img;
}

void ComplexNumber :: exportComplex(){
    cout << read_number;
    if(virtual_number < 0){
        cout << " - ";
    }
    else{
        cout <<" + ";
    }
    cout << abs(virtual_number) << 'i' << endl;
}

const ComplexNumber operator +(ComplexNumber cpl_x){
    return cpl_x;
}

const ComplexNumber operator +(ComplexNumber cpl_x, ComplexNumber cpl_y){
    return ComplexNumber(cpl_x.read_number + cpl_y.read_number, cpl_x.virtual_number + cpl_y.virtual_number);
}

const ComplexNumber operator -(ComplexNumber cpl_x){
    return ComplexNumber(-cpl_x.read_number, -cpl_x.virtual_number);
}

const ComplexNumber operator -(ComplexNumber cpl_x, ComplexNumber cpl_y){
    return cpl_x + -cpl_y;
}

const ComplexNumber operator ++(ComplexNumber& cpl_x){
    return ComplexNumber(cpl_x.read_number ++, cpl_x.virtual_number ++);
}

const ComplexNumber operator ++(ComplexNumber& cpl_x, int ){
    ComplexNumber cpl_x_1(cpl_x);
    ++cpl_x;
    return cpl_x_1;
}
const ComplexNumber operator --(ComplexNumber& cpl_x){
    return ComplexNumber(cpl_x.read_number --, cpl_x.virtual_number --);
}

const ComplexNumber operator --(ComplexNumber& cpl_x, int){
    ComplexNumber cpl_x_1(cpl_x);
    --cpl_x;
    return cpl_x_1;
}

const ComplexNumber operator +=(ComplexNumber& cpl_x, ComplexNumber cpl_y){
    cpl_x.read_number += cpl_y.read_number;
    cpl_x.virtual_number += cpl_y.virtual_number;
    return cpl_x;
}

const ComplexNumber operator -=(ComplexNumber& cpl_x, ComplexNumber cpl_y){
    cpl_x.read_number -= cpl_y.read_number;
    cpl_x.virtual_number -= cpl_y.virtual_number;
    return cpl_x;
}

const bool operator ==(ComplexNumber cpl_x, ComplexNumber cpl_y){
    return cpl_x.read_number == cpl_y.read_number && cpl_x.virtual_number == cpl_y.virtual_number;
}

using namespace std;
int main()
{
    ComplexNumber cpl_1(1.2, 3.4);
    ++cpl_1;
    cpl_1.exportComplex();
    //
    -cpl_1;
    cpl_1.exportComplex();
    //
    --cpl_1;
    cpl_1.exportComplex();
    //
    ComplexNumber cpl_2(9.3, -2.6);
    cpl_1 += cpl_2;
    cpl_1.exportComplex();
    //
    cpl_1 -= cpl_2;
    cpl_1.exportComplex();
    //
    ComplexNumber cpl_3 = (cpl_1 + cpl_2);
    cpl_3.exportComplex();
    //
    cpl_3 = (cpl_1 - cpl_2);
    cpl_3.exportComplex();
    //
    if(cpl_1 == cpl_2){
        cout << "True";
    }else
    {
        cout << "Flase";
    }
    return 0;
}
