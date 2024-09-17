// Copyright 2024 csessomsc
// header file for all prototypes
#ifndef PROGRAM2FUNCTIONS_H_
#define PROGRAM2FUNCTIONS_H_

bool LeapYear(int leapYear);
int LastDayOfMonth(int month, int year = 0);
bool ValidDate(int day, int month, int year);
void NextDate(int &day, int &month, int &year);
void PreviousDate(int &day, int &month, int &year);

#endif
