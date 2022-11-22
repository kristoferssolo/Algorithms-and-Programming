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

int cipLiel5(int n) {
  return (n == 0) ? 0 : ((n % 10 > 5) ? n % 10 : 0) + cipLiel5(n / 10);
}

int main() {
  int continueLoop = 1;
  do {
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << cipLiel5(number) << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
