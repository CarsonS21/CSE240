// copyrigtht 2024 csessoms
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"arrayfunctions.h"
#include<ctime>

int main(){
  int kSize = 5;
  float my_array[kSize] = {};
  for(int i = 0; i < kSize; ++i )
    my_array[i] = rand() % 1000;
  PrintArray(my_array, kSize, 10);
  QuickSort(my_array, kSize);
  PrintArray(my_array, kSize);
  return 0;

}