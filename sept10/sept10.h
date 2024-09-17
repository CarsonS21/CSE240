//Copyright 2024 cSessoms
//header file - contain definitions of things used in other places

//header guard preprocessor directive to keep things from being
// defined multiple times
#ifndef SEPT10_H_      // ignore cpplint message about path
#define SEPT10_H_

int FibonacciR( int n);
int FibonacciI( int n);

//function will display the first numChars characters in the alphabet pausing for pausetime milliseconds between chars
void OutputAlphabet( int numChars = 26, int pauseTime = 500 );

#endif // end SEPT10_H_ guard - ignore cpplint