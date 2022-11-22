/******************************************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0000.
Programma izveidota: 00.00.2022.
******************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int continueLoop = 1;
  do {

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
