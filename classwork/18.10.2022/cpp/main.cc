/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPla0701.
Programma izveidota: 17.10.2022.
******************************************/

#include "./cipSkaits.hh"
#include "iostream"
using namespace std;

int main() {
  int continueLoop = 1;
  do {
    int arrayLength;
    do {
      cout << "Enter array length: " << endl;
      cin >> arrayLength;
      if (0 < arrayLength && arrayLength <= 100)
        break;
      cout << "Entered number must be smaller or equal than 100" << endl;
    } while (1);
    int numbers[arrayLength];
    int numbersLength[arrayLength];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < arrayLength; i++) {
      cin >> numbers[i];
    }
    for (int i = 0; i < arrayLength; i++) {
      numbersLength[i] = cipSkaits(numbers[i]);
    }
    for (int i = 0; i < arrayLength; i++) {
      cout << numbersLength[i] << " ";
    }

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop);
  return 0;
}
