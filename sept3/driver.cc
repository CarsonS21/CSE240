//driver source file wtih the a main to call/test functions
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"sept3.h"

int main(){
    int x;
    cout << "What letter of the alphabet do you want? ";
    cin >> x;
    cout << Letter(x) << endl;

    cout<< ProgramGrade(100 , 100, 100, 0, 100, 100) << endl;

    double a = 15, b = 3.7;
    SwapValues(a, b);
    cout << a << " and " << b << endl;
    int i1 = 10, i2 = 34;
    SwapValues(i1, i2);
    cout << i1 << " and " << i2 << endl;

    return 0;

}