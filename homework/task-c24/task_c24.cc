/*******************************************************
Autors - Kristiāns Francis Cagulis, kc22015
C24. Izdēšs tos masīva elemetus, lai masīvs būtu augošs.
Programma izveidota: 15.10.2022.
*******************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void makeAscending(int *numbers, int length) {
  int i = 1;
  while (i < length) {
    if (numbers[i - 1] >= numbers[i]) {
      for (int j = i--; j < length; j++) {
        numbers[j] = numbers[j + 1];
      }
    } else {
      i++;
    }
  }
}

int main() {
  int ask_continue = 1;
  do {
    int arrayLength;
    while (1) {
      cout << "Enter the length of array: ";
      cin >> arrayLength;
      if (arrayLength > 0)
        break;
      cout << "Array length must be bigger than 0" << endl;
    }
    int *A = new int[arrayLength];

    cout << "Enter array elements" << endl;
    for (int i = 0; i < arrayLength; i++) {
      cin >> A[i];
    }
    cout << endl;

    makeAscending(A, arrayLength);
    for (int i = 0; i < arrayLength; i++) {
      cout << A[i] << " ";
    }

    delete[] A;

    cout << "Continue program? [1/0] ";
    cin >> ask_continue;
  } while (ask_continue == 1);
  return 0;
}
