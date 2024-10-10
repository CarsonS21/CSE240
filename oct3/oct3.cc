//Carson Sessoms
#include<iostream>
using namespace std;


struct BingoCall {
  char bingo;
  int number;
}; // semi - colon ins required here

void PrintCall (const BingoCall& b){
  cout << b.bingo << b.number << endl;
}

// bool Valid(const BingoCall& b){
//   if( b.bingo != 'B' )
// }

int main(){
  BingoCall call; // declarign a structure of the BingoCall structure type
  call.bingo = 'G';
  call.number = 58;
  PrintCall(call);
  BingoCall * ptr = &call;
  //accessing public members on a pointer
  cout << (*ptr).number << endl;
  cout << ptr->number << endl; // these two lines do the same thing
  return 0;
}








/*
int main(){
  //ask the user to input grades and store those in a block of memory
  int num_grades = 5, i = 0;
  int * grades = new int[num_grades];

  cout << "Enter your grades, input a negative value to stop. \n";
  do {
  cin >> grades[i];
  ++i;
  //when the block is full we need to make new space and copy old stuff 
  if( i >= num_grades ){
    int * temp = new int [num_grades * 2];
    for(int j = 0; j < num_grades; ++j){
      temp[j] = grades[j];
    }
    delete [] grades;
    grades = temp; // must free up the old block first to avoid a memory leak
    num_grades *= 2;

  }
  } while( grades[i - 1] >= 0);
  
  for ( int j =0; j < i; ++j){
    cout << grades[j] << " ";
  }
  cout << endl;
  return 0;
}
*/