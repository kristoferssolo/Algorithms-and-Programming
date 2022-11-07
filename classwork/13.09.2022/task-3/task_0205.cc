/***************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0205. Aprēķina negatīvo skaiļu summu.
Programma izveidota: 10.09.2022.
***************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
  int continueLoop, negativeSum = 0;
  do {
    int value;
    cout << "Enter value to sum up: ";
    cin >> value;
    if (value < 0)
      negativeSum += value;
    if (value == 0) {
      cout << "Sum of all entered negative numbers is " << negativeSum << endl;
      negativeSum = 0;

      cout << "Continue? [1/0] ";
      cin >> continueLoop;
    }
  } while (continueLoop == 1);
  return 0;
}
