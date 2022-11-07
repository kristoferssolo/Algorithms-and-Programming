/***************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0303. Nosaka lielāko ievadīto skaitli.
Programma izveidota: 20.09.2022.
***************************************************/
#include <iostream>
using namespace std;

int main() {

  int continueLoop = 1, numberAmaunt;
  long long userInput, biggestNum;
  do {
    biggestNum = 0;
    cout << "Enter how much numbers you want to enter: ";
    cin >> numberAmaunt;
    if (numberAmaunt > 0) {
      for (int i = 0; i < numberAmaunt; i++) {
        cout << "Enter number: ";
        cin >> userInput;
        if (userInput > biggestNum)
          biggestNum = userInput;
      }
      cout << "The biggest entered number was " << biggestNum << endl;
    } else {
      cout << "Numbers must be bigger than 0. Try again: ";
      cin >> numberAmaunt;
    }

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
