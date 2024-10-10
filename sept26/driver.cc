// Copyright 2024 bhipp
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<cstdlib>
#include<ctime>
#include"arrayfunctions.h"

int main() {
  srand(time(0));
  int kSize = 15;
  float my_array[kSize] = { };
  for ( int i = 0; i < kSize; ++i )
    my_array[i] = rand() % 100;
  PrintArray(my_array, kSize, 7);
  QuickSort(my_array, kSize);
  PrintArray(my_array, kSize, 7);
  return 0;
}
