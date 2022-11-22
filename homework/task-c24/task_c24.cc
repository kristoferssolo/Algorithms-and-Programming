/*******************************************************
Autors - Kristiāns Francis Cagulis, kc22015
C24. Izdēšs tos masīva elemetus, lai masīvs būtu augošs.
Programma izveidota: 15.10.2022.
*******************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
int makeAscending(int *numbers, int length);
Funkcija makeAscending(numbers, length) -
izmet tikai tos skaitļus no masīva numbers ar elementu skaitu length, lai masīvs
numbers būtu augošs, un atgriež jaunās virknes garumu.
*/
int makeAscending(double *numbers, int length) {
  int i = 1;
  while (i < length) {
    if (numbers[i - 1] > numbers[i]) {
      // move array to the left by 1 value
      for (int j = i; j < length; j++) {
        numbers[j] = numbers[j + 1];
      }
      length--;
    } else {
      i++;
    }
  }
  return length;
}

int main() {
  int ask_continue = 1;
  do {
    int n;
    // get array length n
    while (1) {
      cout << "Enter the length of array: ";
      cin >> n;
      if (n > 0) {
        break;
      }
      cout << "Array length must be bigger than 0" << endl;
    }

    double *A = new double[n];
    // get array elements from user
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    cout << endl;

    n = makeAscending(A, n);
    // print out array elements
    for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;

    cout << "Continue program? [1/0] ";
    cin >> ask_continue;
  } while (ask_continue == 1);
  return 0;
}
