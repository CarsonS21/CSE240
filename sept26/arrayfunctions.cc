// Copyright 2024 bhipp
#include"arrayfunctions.h"
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>  // for formatting output - setw, setprecision,
                   //                         setiosflags

int Partition(float vals[], int start, int stop) {
  int find_big = start + 1, find_small = stop;
  while ( find_big < find_small && find_big < stop && find_small > start ) {
    while ( vals[find_big] < vals[start] && find_big < stop )
       ++find_big;
    while ( vals[find_small] >= vals[start] && find_small > start )
       --find_small;
    if ( find_big <= stop && find_small > start && find_big < find_small
          && vals[find_big] > vals[find_small] ) {
      float temp = vals[find_big];
      vals[find_big] = vals[find_small];
      vals[find_small] = temp;
      ++find_big;
      --find_small;
      }
  }
  if ( find_small > start && vals[start] > vals[find_small] ) {
    float temp = vals[start];
    vals[start] = vals[find_small];
    vals[find_small] = temp;
  }
  return find_small;
}

void QuickSort(float vals[], int start, int stop) {
  if ( start >= stop )
    return;
  int position = Partition(vals, start, stop);
  QuickSort(vals, start, position-1);
  QuickSort(vals, position+1, stop);
}

void QuickSort(float vals[], int size) {
  // partition the array about the current first value
  int part = Partition(vals, 0, size - 1);
  // quick sort the bottom half
  QuickSort(vals, 0, part - 1);
  // quick sort the top half
  QuickSort(vals, part + 1, size - 1);
}


void PrintArray(const float nums[], int size, int field ) {
  // to fix the decimal point for all output to the standard output
  // device
  cout << std::setiosflags(std::ios::fixed);
  // set the number of places to show after the decimal (if the
  // decimal point is fixed)
  cout << std::setprecision(2);
  for ( int i = 0; i < size; ++i )
    cout << std::setw(field) << nums[i];
  cout << endl;
}

float Average(const float n[], int s) {
  float sum = 0;
  for ( int i = 0; i < s; ++i )
    sum += n[i];
  return sum / s;
}

int LinearSearch(const float vals[], int size, float search) {
  int found_position = -1;
  for ( int i = 0; i < size && found_position == -1; ++i )
    if ( vals[i] == search )
      found_position = i;
  return found_position;
}
