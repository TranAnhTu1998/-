#include <iostream>
#include <string>
#include "Human.h"
#include "student.h"
#include "boss.h"
using namespace std;
int main()
{
    Human *student_x = new Student("Tran", "Tu", "SieuTromKid", 21, 1);
    Human *bos_x = new Boss("Nguyen", "Danh", "ThuocTranhThai", 20, 5);
    student_x->print();
    bos_x->print();
    //cout << "Hello world!" << endl;
    return 0;
}
