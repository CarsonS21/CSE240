// Copyright 2024 csessomsc

#include "program2functions.h"

bool LeapYear(int n) {
  if (n % 400 == 0) {
    return true;
  } else if (n % 100 == 0) {
    return false;
  } else if (n % 4 == 0) {
    return true;
  } else {
    return false;
  }
}

int LastDayOfMonth(int month, int year) {
  if (month == 2) {
    if (year < 1) {
      return 0;
    } else if (LeapYear(year)) {
      return 29;
    } else {
      return 28;
    }
  } else if (month < 1 || month > 12) {
    return 0;
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  } else {
    return 31;
  }
}

bool ValidDate(int month, int day, int year) {
  if (year < 1) {
    return false;
  } else if (day < 1 || day > LastDayOfMonth(month, year)) {
    return false;
  } else if (month < 1 || month > 12) {
    return false;
  } else {
    return true;
  }
}

// I realized there was an easier and more efficient way to do these last
// two methods using LastDayOfMonth after I already wrote these codes
// and they worked.
void NextDate(int& month, int& day, int& year) {
  if (!ValidDate(month, day, year)) {
    return;
  } else if (month == 12) {
    if (day == 31) {
      day = 1;
      month = 1;
      year++;
      return;
    }
  } else if (month == 2) {
    if (LeapYear(year)) {
      if (day == 29) {
        month++;
        day = 1;
        return;
      }
    } else if (day == 28) {
      month++;
      day = 1;
      return;
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    if (day == 30) {
      month++;
      day = 1;
      return;
    }
  } else {
    if (day == 31) {
      month++;
      day = 1;
      return;
    }
  }

  day++;
  return;
}

void PreviousDate(int& month, int& day, int& year) {
  if (!ValidDate(month, day, year)) {
    return;
  } else if (month == 1 && day == 1) {
    year--;
    month = 12;
    day = 31;
    return;
  } else if (month == 3 && day == 1) {
    if (LeapYear(year)) {
      month--;
      day = 29;
      return;
    } else {
      month--;
      day = 28;
      return;
    }
  } else if ((month == 5 || month == 7 || month == 10 || month == 12) && day == 1) {
    month--;
    day = 30;
    return;
  } else {
    if (day == 1) {
      month--;
      day = 31;
      return;
    }
  }

  day--;
  return;
}
