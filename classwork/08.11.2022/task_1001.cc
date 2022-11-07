/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1001.
Programma izveidota: 07.11.2022.
******************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int vertSkaits(int *array, int length, int number) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (number == array[i])
      count++;
  }
  return count;
}

int main() {
  int continueLoop = 1;
  do {
    int length, number, amount;
    cout << "Enter array length: ";
    cin >> length;
    int *array = new int[length];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < length; i++) {
      cin >> array[i];
    }
    cout << "Enter number: ";
    cin >> number;

    amount = vertSkaits(array, length, number);
    delete[] array;
    cout << amount << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
