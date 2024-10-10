// Copyright 2024 CSessoms
#include"program3functions.h"
#include"checkArraysMatch.h"

int CountAboveAv(const double arr[][10], int rows) {
  double total = 0;
  int columns = 10;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      total += arr[i][j];
    }
  }

  double average = total / (rows * columns);
  int aboveAvgCount = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (arr[i][j] > average) {
        aboveAvgCount++;
      }
    }
  }

  return aboveAvgCount;
}


int SortByCol(double arr[][10], int rows, int column, bool ascending) {
  int i = 0;
  if (!ascending) {
    while (i < rows - 1) {
      if (arr[i + 1][column] <= arr[i][column]) {
        i++;
      } else {
        for (int k = 0; k < 10; ++k) {
          double temp = arr[i][k];
          arr[i][k] = arr[i + 1][k];
          arr[i + 1][k] = temp;
        }
        i = 0;
      }
    }
  } else {
    while (i < rows - 1) {
      if (arr[i + 1][column] >= arr[i][column]) {
        i++;
      } else {
        for (int k = 0; k < 10; ++k) {
          double temp = arr[i][k];
          arr[i][k] = arr[i + 1][k];
          arr[i + 1][k] = temp;
        }
        i = 0;
      }
    }
  }
  return 0;
}

int SortByRow(double arr[][10], int rows, int sortRow, bool ascending) {
  int i = 0;
  if (!ascending) {
    // Sort in descending order
    while (i < 9) {
      if (arr[sortRow][i + 1] <= arr[sortRow][i]) {
        i++;
      } else {
        // Swap elements in the specified sortRow
        double temp = arr[sortRow][i];
        arr[sortRow][i] = arr[sortRow][i + 1];
        arr[sortRow][i + 1] = temp;
        i = 0; // Restart checking from the beginning
      }
    }
  } else {
    // Sort in ascending order
    while (i < 9) {
      if (arr[sortRow][i + 1] >= arr[sortRow][i]) {
        i++;
      } else {
        // Swap elements in the specified sortRow
        double temp = arr[sortRow][i];
        arr[sortRow][i] = arr[sortRow][i + 1];
        arr[sortRow][i + 1] = temp;
        i = 0; // Restart checking from the beginning
      }
    }
  }

  return 0;
}


double MedianInCol(double arr[][10], int numRows, int columnToExamine){
  
}



// int SortByCol(double (&arr)[][10], int rows, int column, bool ascending){
//   int i = 0;
//   if(!ascending){
//     while(i < rows - 1){
//       if(arr[i + 1][column] <= arr[i][column])
//         i++;
//       else{
//         double temp = arr[i][column];
//         arr[i][column] = arr[i + 1][column];
//         arr[i + 1][column] = temp;
//         i = 0;
//       }
//     }
//   }
//   if(ascending){
//     while(i < rows - 1){
//       if(arr[i + 1][column] >= arr[i][column])
//         i++;
//       else{
//         double temp = arr[i][column];
//         arr[i][column] = arr[i + 1][column];
//         arr[i + 1][column] = temp;
//         i = 0;
//       }
//     }
//   }
  
//   return 0;
// }








