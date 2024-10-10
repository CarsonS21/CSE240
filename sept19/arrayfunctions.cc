//Copyright 2024 csessoms

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"arrayfunctions.h"
#include<iomanip> // for formatting output - setw, 

void Partition(float vals[], int start, int stop){
  int find_big = start + 1, find_small = stop;
  while( find_big < find_small && find_big < stop && find_small > start){
    while( vals[find_big] < vals[start] && find_big < stop )
      ++find_big;
    while( vals[find_small] > vals[start] && find_small > start)
      --find_small;
    if( find_big < stop && find_small > start && vals[find_big] > vals[find_small]){
      float temp = vals[find_big];
      vals[find_big] = vals[find_small];
      vals[find_small] = temp;
    }
  }
  if ( vals[start] > vals[find_small] ){
    float temp = vals[start];
    vals[start] = vals[find_small];
    vals[find_small] = temp;
  }
}

void QuickSort(float vals[], int size){
  //partition the array about the current first value
  Partition(vals, 0, size);
  //quick sort the bottom half

  //quick sort the top half
}


void PrintArray( const float nums[], int size, int field ){
  //to fix the decimal point for all output to the standard outpout device
  cout << std::setiosflags( std::ios::fixed);
  cout << std::setprecision(2);
  for(int i = 0; i < size; ++i)
    cout << std::setw(field) << nums[i];
  cout << endl;
}

float Average(const float n[], int s){
  float sum = 0;
  for( int i = 0; i < s; ++i ){
    sum += n[i];
  }
  return sum / s;
}

int LinearSearch(const float vals[], int size, float search){
  int found_position = -1;
  for(int i = 0; i < size && found_position == -1; ++i)
    if (vals[i] == search )
      found_position = i;
  return found_position;
}