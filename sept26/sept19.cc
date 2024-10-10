// Copyright 2024 bhipp
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include"arrayfunctions.h"

int main() {
  const int kSize = 8;
  // we can initialize the values in the array when it's declared
  // to a list - if the size is bigger than the list, the remaining
  // elements will be initialized to 0
  float my_real_array[kSize] = { 4, 2.3, -7.1 };

  cout << my_real_array << endl;

  cout << my_real_array + 1 << endl;

  // output all of the in the array
  PrintArray(my_real_array, kSize);

  cout << "Enter " << kSize << " real numbers ";
//  cin >> my_real_array;   // the array is a fixed address this would attempt
// to change the address - illegal!!
  for ( int i = 0; i < kSize; ++i )
    cin >> my_real_array[i];

  // output all of the in the array
  PrintArray(my_real_array, kSize);
  cout << "Average = " << Average(my_real_array, kSize);

  const float gpas[8] = { 0, 1, 1.5, 2, 2.5, 3, 3.5, 4 };
  PrintArray(gpas, 8);

  float find_me;
  cout << "What are you looking for? ";
  cin >> find_me;
  cout << LinearSearch(gpas, 8, find_me) << endl;

  return 0;
}





