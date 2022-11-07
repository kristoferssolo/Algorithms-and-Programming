/***********************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0406. Nosaka ievadītā skaitļa lielāko ciparu pierakstā.
Programma izveidota: 27.09.2022.
***********************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int getBiggestInt(long long number) {
  int biggestInt = 0;
  for (int i = 0; i < floor(log10(number) + 1); i++) {
    int num;
    num = (number / (long long)pow(10, i)) % 10;
    if (num > biggestInt)
      biggestInt = num;
  }
  return biggestInt;
}

int main() {
  int continueLoop = 1;
  long long userInput;
  do {
    cout << "Enter number: ";
    cin >> userInput;
    cout << "The biggest integer of number " << userInput << " is "
         << getBiggestInt(userInput) << endl;

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
