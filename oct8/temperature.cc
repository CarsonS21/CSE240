//cc Csessoms
//implement the member functions in the Temperature Class
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;

Temperature::Temperature(){

  value_ = 70;
  unit_ = " Farenheti ";
}

void Temperature::Print(){
  cout << value_ << " degrees " << unit_ << endl;
}