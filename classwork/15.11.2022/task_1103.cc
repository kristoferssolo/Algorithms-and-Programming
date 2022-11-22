/******************************************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1101.
Programma izveidota: 15.11.2022.
******************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
int rindLiels(const T &matrix, int rows, int columns, int r) {
  if (r > rows - 1) {
    cout << "Enter smaller row number" << endl;
    return 0;
  }
  int count = 0;
  for (int column = 0; column < columns; column++) {
    if (matrix[r - 1][column] > 17) {
      count++;
    }
  }
  return count;
}

int main() {
  int continueLoop = 1;
  do {
    int rows, columns, r;
    cout << "Enter amount of rows: ";
    cin >> rows;
    cout << "Enter amount of colums: ";
    cin >> columns;

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
      matrix[i] = new int[columns];
    }

    for (int row = 0; row < rows; row++) {
      for (int column = 0; column < columns; column++) {
        cin >> matrix[row][column];
      }
    }
    cout << "Enter row you want to calculate: ";
    cin >> r;

    cout << rindLiels(matrix, rows, columns, r) << endl;

    // delete matrix
    for (int i = 0; i < rows; i++) {
      delete[] matrix[i];
    }
    delete[] matrix;
    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
