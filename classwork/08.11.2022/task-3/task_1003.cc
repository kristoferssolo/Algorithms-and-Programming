/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1003.
Programma izveidota: 07.11.2022.
******************************************************************/
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isSquare(int number) {
  return static_cast<int>(sqrt(number)) == sqrt(number);
}

int main() {
  int continueLoop = 1;
  do {
    int m, n;
    cout << "Enter m number: ";
    cin >> m;
    cout << "Enter n number: ";
    cin >> n;
    for (; m <= n; m++) {
      if (isSquare(m))
        cout << m << " ";
    }
    cout << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
