// copyright 2024 csessoms
//intro to pointers

#include<iostream>
using namespace std;


int main(){
  //an array is like a constant pointer - holds an adddress, but the
  //address cant change
  char phrase[] = "how are you doing?";
  cout << phrase << endl;
  char *cptr = phrase;
  cptr += 4;
  *cptr += 1;
  cout << cptr << endl;

  int numbers[] = {1,7,15,22,100,300};
  int * iptr = numbers;
  iptr += 4;
  *iptr += 4;
  cout << iptr << endl;
  return 0;
}


/*
int main(){
  int i = 3;
  double d = 2.7;
  char c = 'a';
  cout << &i << endl;
  cout << *(&i + 1) << endl;
  cout << &c << endl;
  cout << *(&d) << endl;// & and * are inverse opration
  // cout << &(*d) << endl;//this doesnt make sense because d is not an address
  // iprt is a pointer to an integer, so i should be assigned
  // the adress of some integer in memory
  int * iptr = &i;
  cout << "iptr = " << iptr << endl;
  cout << "&iptr = " << &iptr << endl;
  cout << "*iptr = " << *iptr << endl;
  return 0;
}
*/