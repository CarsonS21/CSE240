// Copyright 2024 csessomsc

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  int day1, day2, month1, month2, year1, year2, numDaysBetween = 0, permD1, permM1, permY1;
  char seperator;
  cin >> month1 >> seperator >> day1 >> seperator >> year1; 
  cin >> month2 >> seperator >> day2 >> seperator >> year2;
  permD1 = day1;
  permM1 = month1;
  permY1 = year1;

  if (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
        while (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
            NextDate(month1, day1, year1);
            numDaysBetween++;
        }

        cout << permM1 << seperator << permD1 << seperator << permY1 << " is " 
             << numDaysBetween << " days before " << month2 << seperator << day2 << seperator << year2 << endl;
    } else if (year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
        while (year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
            PreviousDate(month1, day1, year1);
            numDaysBetween++;
        }

        cout << permM1 << seperator << permD1 << seperator << permY1 << " is " 
             << numDaysBetween << " days after " << month2 << seperator << day2 << seperator << year2 << endl;
    } else {
        cout << permM1 << seperator << permD1 << seperator << permY1 << " is " 
             << numDaysBetween << " days before " << month2 << seperator << day2 << seperator << year2 << endl;
    }


  return 0;
}
