/***********************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0505. Nosaka lielākā skaitļa vērtību.
Programma izveidota: 03.10.2022.
***********************************************************/
#include <iostream>
using namespace std;

int getBiggestNumber(long long a, long long b) {
  if (a > b)
    return a;
  return b;
}

int main() {
  int continueLoop = 1;
  do {
    long long userInput, numberAmount, biggestNumber;
    do {
      cout << "Enter, how much numbers you want to enter: ";
      cin >> numberAmount;
    } while (numberAmount < 1);

    for (int cycle = 0; cycle < numberAmount; cycle++) {
      cout << "Enter number: ";
      cin >> userInput;
      if (!cycle) // 1st cycle
        biggestNumber = userInput;
      biggestNumber = getBiggestNumber(userInput, biggestNumber);
    }
    cout << "The greatest entered number was " << biggestNumber << endl;

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
