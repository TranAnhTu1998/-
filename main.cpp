#include <iostream>
using namespace std;
void importArray(int *a, unsigned n){
    cout << "Enter values into the array: ";
    for(unsigned i = 0; i < n; i ++){
        cin >> a[i];
    }
}
void exportArray(int *a, unsigned n){
    for(unsigned i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
}
int sumArray(int *a, unsigned n){
    int s = 0;
    for(unsigned i = 0; i < n; i ++){
        s += a[i];
    }
    return s;
}
/*Функция f1 переводит элемент a[k] на первую позицию в массиве.*/
void f1(int *a, unsigned k){
    int x = a[k];
    for(unsigned i = k; i > 0; i --){
        a[i] = a[i-1];
    }
    a[0] = x;
}
/*Функция f2 переводит элемент a[k] в положение,
в котором он больше,
чем элемент перед ним, и меньше,
чем элемент за ним.*/
void f2(int *a, unsigned k){
    int i = k - 1;
    //cout << "i = " << i << endl;
    if(a[i] != a[k]){
        while(i >= 0 && a[i] > a[k]){
            i --;
        }
        //cout << "i = " << i << endl;
        int x = a[k];
        //cout << "x = " << x << endl;
        int j = k;
        while(j >= i+2){
            a[j] = a[j - 1];
            j --;
        }
        a[i+1] = x;
        //cout <<"a[i + 1] = " << a[i + 1] << endl;
    }
}
/*Функция f3 переводит элемент a[k] в положение,
которое меньше,
чем элемент перед ним, и больше,
чем элемент за ним.*/
void f3(int *a, unsigned k){
    int i = k - 1;
    if(a[i] != a[k]){
        while(i >= 0 && a[i] < a[k]){
            i --;
        }
        int x = a[k];
        int j = k;
        while(j >= i+2){
            a[j] = a[j - 1];
            j --;
        }
        a[i+1] = x;
    }
}
void fold(int *a, unsigned n, void (*f)(int *, unsigned)){
    for(unsigned i = 1; i < n; i ++){
        f(a, i);
        //exportArray(a,n);
        //cout << "\n";
    }
}

int main()
{
    unsigned n;
    int *a;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    a = (int*)calloc(n, sizeof(int));
    importArray(a, n);
    void (*f_general)(int *, unsigned, void (*)(int *, unsigned));
    f_general = fold;
    int sum = sumArray(a, n);
    cout << "The first value in the array is: a[0] = " << a[0] << endl;
    cout << "The sum of the first elements in the array is: sum " << sum << endl;
    if(a[0] == sum){
        cout << "Because a[0] = sum, the array is:";
        f_general(a, n, f1);
        exportArray(a, n);
    }
    else if(a[0] < sum){
        cout << "Because a[0] < sum, the array is: ";
        f_general(a, n, f2);
        exportArray(a, n);
    }
    else{
        cout << "Because a[0] > sum, the array is: ";
        f_general(a, n, f3);
        exportArray(a, n);
    }
    return 0;
}
