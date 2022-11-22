/******************************************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1102.
Programma izveidota: 15.11.2022.
******************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
T lielakais(T *a, int n);

*/

template <typename T> T lielakais(T *a, int n) {
  T greatest = a[0];

  for (int i = 0; i < n; i++) {
    greatest = (a[i] > greatest) ? a[i] : greatest;
  }
  return greatest;
}

int main() {
  int continueLoop = 1;
  do {
    int lenght;
    cout << "Enter array lenght: ";
    cin >> lenght;

    int *A = new int[lenght];

    cout << "Enter array values: ";
    for (int i = 0; i < lenght; i++) {
      cin >> A[i];
    }

    cout << lielakais(A, lenght) << endl;
    delete[] A;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
