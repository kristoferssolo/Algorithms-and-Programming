/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0801.
Programma izveidota: 24.10.2022.
******************************************/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int countChar(string const &string, char character) {
  int result = 0;
  for (int i = 0; i < string.length(); i++) {
    if (string[i] == character)
      result++;
  }
  return result;
}

int countChar2(string const &string, char character) {
  return count(string.begin(), string.end(), character);
}

int main() {
  int continueLoop = 1;
  do {
    char string[100];
    char character;
    cout << "Enter string: ";
    cin.getline(string, 100);
    cout << "Enter character: ";
    cin.get(character);

    cout << "'" << character << "' in '" << string << "' appears "
         << countChar(string, character) << " times";

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
    cin.ignore();
  } while (continueLoop);
  return 0;
}
