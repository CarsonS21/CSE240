//Copyright 2024 csessoms
//source file with implementations of functions listed in sept5.h
#include"./sept5.h"
#include<cmath> // contains double sqrt(double);

int QuadraticRoot ( double a, double b, double c, double& root1, double& root2){
  double disc = b * b - 4 * a * c;
  if(disc < 0)
    return 0;
  root1 = (-1 * b + sqrt(disc)) /(2 * a);
  if( disc == 0 )
    return 1;
  root2 = ( -1 * b - sqrt(disc)) / (2 * a);
  return 2;
}

int Factorial(int n){
//   if( n <= 0)
//     return 1;
//   else
//     return n * Factorial(n-1);

  int answer = 1;
  for( int i = 1; i <= n; ++i )
    answer *= 1;
  return answer;
}