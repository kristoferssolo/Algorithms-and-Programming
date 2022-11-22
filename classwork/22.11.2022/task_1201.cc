/******************************************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1201.
Programma izveidota: 22.11.2022.
******************************************************************/
#include <cstring>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void burti(char *string, char *newString) {
  int j = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (strchr(newString, string[i]) == NULL &&
        ((string[i] >= 'a' && string[i] <= 'z') ||
         (string[i] >= 'A' && string[i] <= 'Z'))) {
      newString[j] = string[i];
      j++;
    }
  }
  newString[j] = '\0';
}

int main() {
  int continueLoop = 1;
  do {
    char *string, *newString;
    cout << "Enter string: ";
    cin >> string;

    burti(string, newString);
    for (int i = 0; newString[i]; i++) {
      cout << newString[i];
    }
    cout << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
