/***************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0301. Nosaka piederību gadalaikam dotam mēneša kārtas numuram.
Programma izveidota: 18.09.2022.
***************************************************/
#include <iostream>
using namespace std;

int main() {
  int userInput, continueLoop = 1;
  string season;
  do {
    cout << "Enter month number: ";
    cin >> userInput;
    if (userInput >= 1 && userInput <= 12) {
      if (userInput <= 2 || userInput == 12)
        season = "winter";
      else if (userInput <= 5)
        season = "spring";
      else if (userInput <= 8)
        season = "summer";
      else if (userInput <= 11)
        season = "autumn";

      cout << "It's " << season << " month" << endl << endl;

    } else {
      cout << "Invalid month number" << endl << endl;
      continue;
    }

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
