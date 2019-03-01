#include "complex.h"
#include "iostream"
using namespace std;
void complex_number :: importComplex(float re, float img){
    read_number = re;
    virtual_number = img;
}
void complex_number :: exportComplex(){
    cout << read_number; cout <<"+"; cout << virtual_number; cout << 'i' << endl;

}
complex_number complex_number ::sumTwoComplexNumbers(complex_number comp){
    complex_number comp_sum;
    comp_sum.read_number = read_number + comp.read_number;
    comp_sum.virtual_number = virtual_number + comp.virtual_number;
    return comp_sum;
}
complex_number complex_number ::effxectTwoComplexNumbers(complex_number comp){
    complex_number comp_eff;
    comp_eff.read_number = read_number - comp.read_number;
    comp_eff.virtual_number = virtual_number - comp.virtual_number;
    return comp_eff;
}
complex_number complex_number ::calculatesTwoComplexNumbers(complex_number comp){
    complex_number comp_cal;
    comp_cal.read_number = read_number*comp.read_number - virtual_number*comp.virtual_number;
    comp_cal.virtual_number = read_number * comp.virtual_number + virtual_number*comp.read_number;
    return comp_cal;
}
/*using namespace std;

int main(){

}*/
