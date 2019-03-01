#include "iostream"
#include "Complex.h"
using namespace std;
int main(){
    float re, img;
    complex_number complex1, complex2;
    cout << "Enter data for the first complex number: ";
    cin >> re; cin >> img;
    complex1.importComplex(re, img);
    cout << "Enter data for the second complex number: ";
    cin >> re; cin >> img;
    complex2.importComplex(re, img);
    cout<< "Sum two complex numbers: ";
    (complex1.sumTwoComplexNumbers(complex2)).exportComplex();
    cout<< "Effxect two complex numbers: ";
    (complex1.effxectTwoComplexNumbers(complex2)).exportComplex();
    cout<< "Calculates two complex numbers: ";
    (complex1.calculatesTwoComplexNumbers(complex2)).exportComplex();
    return 0;
}
