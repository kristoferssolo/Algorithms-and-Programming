/********************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0403. Nosaka garākās ievadīto skaiļu virknes garumu.
Programma izveidota: 27.09.2022.
********************************************************/
#include <iostream>
using namespace std;

int main() {
  int continueLoop = 1, sequence = 0, biggest_sequence = 0;
  long long userInput, previousNumber, numberAmount;
  do {
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
      if (userInput <= previousNumber)
        sequence = 0;
      sequence++;
      if (sequence > biggest_sequence)
        biggest_sequence = sequence;
      previousNumber = userInput;
    }
    cout << endl
         << "Longest sequence of acsending numbers is " << biggest_sequence
         << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
