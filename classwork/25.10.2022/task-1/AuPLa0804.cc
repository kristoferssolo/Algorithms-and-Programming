/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0804.
Programma izveidota: 25.10.2022.
******************************************/

#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int continueLoop = 1;
  do {
    char character;
    while (1) {
      cout << "Enter character: ";
      cin.get(character);
      if (isalpha(character))
        cout << (char)toupper(character) << endl;
      else
        cout << (char)character << endl;
      cin.ignore(1);
      if (character != '\n')
        break;
    }

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop);
  return 0;
}
