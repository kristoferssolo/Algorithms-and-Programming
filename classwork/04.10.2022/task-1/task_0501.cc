/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0501. Izvada n lielu piramīdu.
Programma izveidota: 03.10.2022.
******************************************/
#include <iostream>
using namespace std;

int main() {
  int continueLoop = 1;
  do {
    int userInput;
    string string;
    cout << "Enter number: ";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++) {
      string += "*";
      cout << string << endl;
    }
    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop);
  return 0;
}
