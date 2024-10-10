//Carson Sessoms
//define a temperature classs
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include<string>
using std::string;


class Temperature{
  

 public:
  Temperature();
  void Print();
 private: //google styke - one space for public/private/protected
  double value_;// Google style, for private data members put underscore at the end
  string unit_;

};

#endif