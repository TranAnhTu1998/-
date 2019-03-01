#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED



#endif // COMPLEX_H_INCLUDED
struct complex_number{
    float read_number;
    float virtual_number;

    void importComplex(float re, float img);
    void exportComplex();
    complex_number sumTwoComplexNumbers(complex_number comp);
    complex_number effxectTwoComplexNumbers(complex_number comp);
    complex_number calculatesTwoComplexNumbers(complex_number comp);
};

