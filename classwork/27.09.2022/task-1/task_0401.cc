/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0401. Nosaka, vai ievadītie skaitļi ir stingri augošā secībā.
Programma izveidota: 27.09.2022.
******************************************************************/
#include <iostream>
using namespace std;

int main() {
  int continueLoop = 1;
  long long numberAmount, previousNumber, userInput;
  do {
    bool ascending = true;
    cout << "Enter, how much numbers you want to enter: ";
    cin >> numberAmount;
    while (numberAmount <= 0) {
      cout << "Please enter natural number: ";
      cin >> numberAmount;
    }
    for (int i = 0; i < numberAmount; i++) {
      cout << "Enter number: ";
      cin >> userInput;
      if (!i)
        previousNumber = userInput;
      else {
        if (userInput <= previousNumber)
          ascending = false;
        previousNumber = userInput;
      }
    }
    if (ascending)
      cout << endl << "Entered numbers were in ascending order" << endl;
    else
      cout << endl << "Entered numbers weren't in ascending order" << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
