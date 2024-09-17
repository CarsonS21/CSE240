// Copyright 2024 Carson Sessoms
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//algorithm to check and see if a number is prime
bool isPrime(int number) {
    if (number <= 1){
        return false;
    } 
    if (number == 2){
        return true;
    }
    if (number % 2 == 0){
        return false;
    }
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    char character, leftChars;
    int leftSide = 0, rightSide = 1;  //right side has to equal one since im multiplying from the first time i change it
    int tempNumber = 0;
    int tempExponent = 0;
    int sign = 1;
    bool exponent = false;
    bool left = true;
    bool right = false;
    bool primeCheck = true;
    cout << "Welcome to the prime factorization checker program" << endl;
    cout << "Please enter the prime factorization of a non-zero integer" << endl;
    //while loop while the input has another character to read
    while (cin.get(character)) {
        if (character == '?') {
            if(right){
                if(tempExponent != 0){
                    int power = 1;
                    for(int i = 0; i < tempExponent; ++i ){
                        power *= tempNumber;
                    }
                    rightSide *= power;
                }
            rightSide = rightSide*sign;
            break;
            }
        }

        if(character >= '0' && character <= '9' ){
            int charAsNum = character - '0';
            if (left) {
                leftSide = leftSide * 10 + charAsNum;
                continue;
            }
            if (right){
                if(primeCheck){
                    tempNumber = tempNumber * 10 + charAsNum;
                    continue;
                } // primecheck and exponent always have opposite values, so this works
                if(exponent){
                    tempExponent = tempExponent * 10 + charAsNum;
                    continue;
                }
                continue;
            }
        }
        if(character == '='){
            left = false;
            leftSide = leftSide * sign;
            sign = 1;
            right = true;
            continue;
        }
        if(character == '-'){
            sign = -1;
            continue;
        }
        if(character == '*'){
            primeCheck=true;
            continue;

        }
        if(character == '^'){
            if(!isPrime(tempNumber)){
                cout << "invalid input format" << endl;
            }
            primeCheck=false;
            exponent = true;
            continue;

        }
        if(character == ' '){
            if(right){
                if(tempExponent != 0){
                    int power = 1;
                    for(int i = 0; i < tempExponent; ++i ){
                        power *= tempNumber;
                    }
                    rightSide *= power;
                    tempNumber = 0;
                    tempExponent = 0;
                }

            }
            exponent = false;
            primeCheck = true;
            continue;
        }

        cout << "wrong format or input" << endl;
        return 1;
    }
    cout << leftSide << endl;
    cout << rightSide << endl;
    return 0;    
}
