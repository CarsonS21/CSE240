//copyright 2024 csessoms
//source file with sample tests of functions written on 9/5
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"./sept5.h"

// int main(){
//   double r1, r2 , quad , lin, cons;
//   cout << "Enter the coefficenets for you quadratic polynomial:\n  x^2\r";
//   cin >> quad;
//   cout << "  x\r";
//   cin >> lin;
//   cin >> cons;

//   cout << QuadraticRoot(quad,  lin, cons, r1, r2) << endl;
//   cout << r1 << " " << r2 << endl;
//   return 0;
    
// }

int main() {
    int num;
    cout << " enter a non negative integer ";
    cin >> num;
    cout << num << "! = " << Factorial(num) << endl;
    return 0;
}