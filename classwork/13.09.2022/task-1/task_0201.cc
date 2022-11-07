/***************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0201. Pārvērš Fārenheita grādus Celsija grādos.
Programma izveidota: 10.09.2022.
***************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
  int continueLoop;
  double fahrenheit, celsius;
  do {
    cout << "Enter degrees in Fahrinheit: ";
    cin >> fahrenheit;
    celsius = 5. / 9. * (fahrenheit - 32.);
    cout << fahrenheit << " degrees in Fahrenheit is " << celsius
         << " degrees in Celsius" << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
  } while (continueLoop == 1);
  return 0;
}

/*
Testu plāns
Fahrinheit        Celsius
32                0
0                 -17.8...
97.9              36.6...
*/
