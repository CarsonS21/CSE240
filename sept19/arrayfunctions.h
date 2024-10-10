//copyright 2024 csessomsS

#ifndef ARRAY_FUNCTIONS_H_
#define ARRAY_FUNCTIONS_H_

//PrintArray function takes an array of floats and the size of the
// array as parameters
//making the array parameter constant means that this function
//cant modify the values in the array
void PrintArray( const float nums[], int size, int field = 6 );

//write a function that finds the average value of items in an array
float Average( const float n[], int s);

// Linear seach
int LinearSearch( const float vals[], int size, float search_value);

// quick sort function
void QuickSort(float vals[], int size);

#endif