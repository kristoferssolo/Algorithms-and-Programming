/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0601. Izvada n lielu piramīdu.
Programma izveidota: 03.10.2022.
******************************************/
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int continueLoop = 1;
  do {
    int userInput;
    cout << "Enter number: ";
    cin >> userInput;

    switch (userInput) {
    case 3:
      cout << "1 and 2" << endl;
      break;
    case 6:
      cout << "1 and 5" << endl;
      break;
    case 7:
      cout << "2 and 5" << endl;
      break;
    default:
      cout << "Imposible" << endl;
      break;
    }

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop);
  return 0;
}
