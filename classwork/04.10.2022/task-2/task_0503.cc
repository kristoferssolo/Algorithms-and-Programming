/******************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0503. Nosaka ciparu skaitu skaitlī.
Programma izveidota: 03.10.2022.
******************************************/
#include <iostream>
using namespace std;

int getTimes(long long number, long long integer) {
  int length = 0;
  while (number) {
    if (number % 10 == integer)
      length++;
    number /= 10;
  }
  return length;
}

int main() {
  int continueLoop = 1;
  do {
    long long number, integer;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter number, amount of which you want to know: ";
    cin >> integer;
    cout << "Integer " << integer << " was found " << getTimes(number, integer)
         << " time(s) in number " << number << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
