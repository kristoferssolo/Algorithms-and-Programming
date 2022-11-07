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

bool isSquare(int64_t number) {
  int sqrtNum = static_cast<int64_t>(sqrt(number));
  return sqrtNum * sqrtNum == number;
}

int main() {
  int continueLoop = 1;
  do {
    int m, n;
    cin >> m >> n;
    for (; m <= n; m++) {
      if (isSquare(m))
        cout << m << endl;
    }

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
