/***********************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0507. Papilduzdevums
Programma izveidota: 04.10.2022.
***********************************************************/
#include <iostream>
using namespace std;

int main() {
  int num = 13, offset = 0;
  for (int i = 0; i < num; i++, offset++) {
    if (i % 3 == 0)
      offset = 0;
    for (int j = 0; j < num; j++) {
      if (j % 3 == 0 + offset)
        cout << "*";
      else
        cout << "_";
    }
    cout << endl;
  }

  return 0;
}
