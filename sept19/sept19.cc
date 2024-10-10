//Copyright 2024 csessoms
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"arrayfunctions.h"


int main(){
  const int kSize = 8;
  //elements that arent initalized will default to 0 if a list is declared
  float my_real_array[kSize] = { 4, 2.3, -7.1 };

  cout << my_real_array << endl;

  cout << my_real_array + 1 << endl;


cout << "Enter " << kSize << " real numbers ";
  for(int i = 0; i <kSize; ++i)
    cin >> my_real_array[i];


  // output all of the in the array
  // for( int i = 0; i < kSize; ++i )
  //   cout << my_real_array[i] << " ";
  // cout << endl;
  PrintArray( my_real_array, kSize);
  cout << "Average = " << Average(my_real_array, kSize) << endl;

  const float gpas[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  float find_me;
  cout << "What are you lookning for? ";
  cin >> find_me;
  cout << LinearSearch(gpas, kSize, find_me);
  return 0;
}


