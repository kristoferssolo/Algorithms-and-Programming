/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0902.
Programma izveidota: 01.11.2022.
******************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

double getAverage(int a, int b) {
  // Return average of 2 numbers
  return ((double)a + b) / 2;
}

double median(int *pNumbers, int length) {
  // Returns median of an array
  double median;
  sort(pNumbers, pNumbers + length);
  if (length % 2 == 0) {
    return getAverage(pNumbers[length / 2 - 1], pNumbers[length / 2]);
  }
  return pNumbers[length / 2];
}

int main() {
  int continueLoop = 1;
  do {
    int numberAmount = 0;
    while (1) {
      cout << "Enter number amount in array: ";
      cin >> numberAmount;
      if (numberAmount > 0)
        break;
      cout << "Number must be natural (>0)" << endl;
    }
    int number;
    vector<int> numbers[numberAmount];

    for (int i = 0; i < numberAmount; i++) {
      while (1) {
        cin >> number;
        if (number >= 0)
          break;
        cout << "Number must be natural (>=0): ";
      }
      numbers[i].push_back(number);
    }

    cout << "Median is: " << median(numbers, numberAmount) << endl;
    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
