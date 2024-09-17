//Copyright 2024 Carson Sessoms
// header file with funtion prototypes for anyone
//who needs to use/call our funtions
#ifndef _SEPT3_H_
#define _SEPT3_H_



//function that returns the nth letter of the alphabet
char Letter(int n);

//function that computes the average of 6 program grades, dropping the lowest
double ProgramGrade(double, double, double, double, double, double = 0);

// swap the values of two double variables
void SwapValues(double&, double&);

// swap the values of two integer variables
// were OVERLOADING the SwapValues function - same name, distinct parameter list
void SwapValues(int&, int&);

#endif // ending ifndef for _SEPT3_H_