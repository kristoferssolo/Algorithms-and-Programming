/****************************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0305. Pārbauda, vai kāds no trim ievadītajiem skaitļiem beidzas ae '21'.
Programma izveidota: 20.09.2022.
****************************************************************************/
#include <iostream>
using namespace std;

int main() {
  long long number1, number2, number3;
  int continueLoop = 1;
  bool luckyNumbers = false;
  do {
    cout << "Enter 3 numbers: " << endl;
    cin >> number1 >> number2 >> number3;

    if (number1 % 100 == 21) {
      cout << number1 << " is lucky number" << endl;
      luckyNumbers = true;
    }
    if (number2 % 100 == 21) {
      cout << number2 << " is lucky number" << endl;
      luckyNumbers = true;
    }
    if (number3 % 100 == 21) {
      cout << number3 << " is lucky number" << endl;
      luckyNumbers = true;
    }
    if (!luckyNumbers)
      cout << "There are no lucky numbers" << endl;

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
