/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0603. Nosaka lielākā skaitļa vērtību.
Programma izveidota: 11.10.2022.
******************************************/
#include <iostream>
using namespace std;

// int getBiggestNumber(int a, int b) { return (a > b) ? a : b; }
// float getBiggestNumber(float a, float b) { return (a > b) ? a : b; }
// double getBiggestNumber(double a, double b) { return (a > b) ? a : b; }
int lielakais(int a, int b) { return (a > b) ? a : b; }
float lielakais(float a, float b) { return (a > b) ? a : b; }
double lielakais(double a, double b) { return (a > b) ? a : b; }

int main() {
  int continueLoop = 1;
  do {
    int numberAmount;
    int userInput, biggestNumber;
    cout << "Enter N number: ";
    cin >> numberAmount;
    for (int cycle = 0; cycle < numberAmount; cycle++) {
      cout << "Enter number: ";
      cin >> userInput;
      if (!cycle)
        biggestNumber = userInput;
      // biggestNumber = getBiggestNumber(userInput, biggestNumber);
      biggestNumber = lielakais(userInput, biggestNumber);
    }
    cout << "The greatest entered number was " << biggestNumber << endl;

    cout << endl << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop);
  return 0;
}
