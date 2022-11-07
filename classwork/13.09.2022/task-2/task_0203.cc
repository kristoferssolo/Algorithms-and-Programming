/***************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0203. Aprēķina funkcijas f(x) vērtību.
Programma izveidota: 10.09.2022.
***************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
  int continueLoop;
  double xValue, yValue;
  do {
    cout << "Enter x value: ";
    cin >> xValue;
    if (xValue < -2)
      yValue = 0;
    else if (xValue <= -1)
      yValue = -xValue - 2;
    else if (xValue < 1)
      yValue = xValue;
    else if (xValue < 2)
      yValue = -xValue - 2;
    else
      yValue = 0;

    cout << "f(x) = " << yValue << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop == 1);
  return 0;
}
