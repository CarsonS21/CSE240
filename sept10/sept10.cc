//copyright 2024 csessoms
//implementation of funtions
#include"sept10.h"
#include<iostream>
using std::cout;

int FibonacciR( int n){
  if ( n < 0)
    return 0;
  if ( n == 0 || n == 1)
    return 1;
  return FibonacciR(n-1) + FibonacciR(n-2);
}
int FibonacciI( int n ){
  if ( n < 0)
    return 0;
  if( n == 0 || n == 1)
    return 1;
  int fprev = 1, fi = 1, temp;
  for(int i = 2; i <= n; i++){
    temp = fi;
    fi = fi + fprev;
    fprev = temp;
  }
  return fi;
}
void OutputAlphabet( int numChars, int pauseTime){
  if( numChars < 1 || numChars > 26)
    numChars = 26;
  if(pauseTime < 0)
    pauseTime = 500;
  int start, i;
  for(char letter = 'A'; i < numChars; ++i, ++letter){
    cout << "\r" << letter;
    start = clock();
    while(clock() < start + pauseTime );

  }
}


