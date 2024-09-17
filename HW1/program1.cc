// Copyright 2024 Carson Sessoms
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// checks if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// finds the result of a number to a power
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

// function to find the prime factorization of an integer
void primeFactorsFinder(int num) {
    if (num == 0 || num == 1 || num == -1) {
        return;
    }

    if (num < 0) {
        cout << "-1 * ";
        num = -num;
    }

    int exponent = 0;
    bool printed = false;
    while (num % 2 == 0) {
        exponent++;
        num /= 2;
    }
    if (exponent > 0) {
        cout << "2^" << exponent;
        printed = true;
    }

    for (int i = 3; i * i <= num; i += 2) {
        exponent = 0;
        while (num % i == 0) {
            exponent++;
            num /= i;
        }
        if (exponent > 0) {
            if (printed) {
                cout << " * ";
            }
            cout << i << "^" << exponent;
            printed = true;
        }
    }

    if (num > 2) {
        if (printed) {
            cout << " * ";
        }
        cout << num << "^1";
    }
}


int main() {
    //variables i need
    char character;
    int leftSide = 0, rightSide = 1;
    int tempNumber = 0, tempExponent = 0;
    int sign = 1;
    bool exponent = false, left = true, right = false, primeCheck = true, testForOneEquals = false;
    

    // cout << "Welcome to the prime factorization checker program" << endl;
    // cout << "Please enter the prime factorization of a non-zero integer" << endl;

    while (cin.get(character)) {
        //calculates the last number when the user ends input with a ?
        if (character == '?') {
            if (right && tempNumber != 0) {
                rightSide *= power(tempNumber, tempExponent);
            }
            rightSide *= sign;
            break;
        }
        //Decides what to do if a character is an integer and splits it between if its on the left side or right side
        if (character >= '0' && character <= '9') {
            int charAsNumber = character - '0';
            //test for a one after the equals sign
            if(testForOneEquals){
                if(charAsNumber != 1){
                    cout << "Invalid input format." << endl;
                    break;
                }
                testForOneEquals = false;
            }
            //if its on the left side just multiplys the left side by 10 to move the place and adds the new number
            else if (left) {
                leftSide = leftSide * 10 + charAsNumber;
            } 
            //if on the right side it checks to see if were checking for a prime number, if it is it does the same thing but in a tempnumber
            // if the boolean exponent is true(if exponent is true primecheck is false in this program) it adds it to the exponent
            else if (right) {
                if (primeCheck) {
                    tempNumber = tempNumber * 10 + charAsNumber;
                } 
                else if (exponent) {
                    tempExponent = tempExponent * 10 + charAsNumber;
                }
            }
        } 
        //changes the side and resets the sign so the code can start calculating the right side now
        else if (character == '=') {
            left = false;
            testForOneEquals = true;
            leftSide *= sign;
            sign = 1;
            right = true;
        } 
        //changes the sign so when rightside or leftside is multiplied by sign when they are being calculated it will be correct
        else if (character == '-') {
            sign = -1;
        } 
        //when its on the right side of the equals sign, uses the power function to determine the value of the previous number
        // then sets the temporary variable holder for the base and exponent to 0
        else if (character == '*') {
            if (right && tempNumber != 0) {
                rightSide *= power(tempNumber, tempExponent);
                tempNumber = 0;
                tempExponent = 0;
            }
            primeCheck = true;
            exponent = false;
        } 
        // tells the code were expecting an exponent next, and checks the previously entered number before the exponent to make sure it is prime
        else if (character == '^') {
            if (!isPrime(tempNumber)) {
                cout << "Invalid input format." << endl;
                return 1;
            }
            primeCheck = false;
            exponent = true;
        } 
        // just tells the program to ignore spaces
        else if (character == ' ') {
            continue;
        } 
        // if the program fails
        else {
            cout << "Invalid input format." << endl;
            return 1;
        }
    }

    if (leftSide == rightSide) {
        cout << "Correct!" << endl;
    } 
    else if (testForOneEquals == false) {
         cout << "Incorrect. " << leftSide << " = ";
         primeFactorsFinder(leftSide);
         cout << endl;
    }

    return 0;
}
