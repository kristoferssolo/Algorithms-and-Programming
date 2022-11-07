/**********************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
B24. Atrod divus pirmskaitļus, kuru summa ir n.
Programma izveidota: 06.10.2022.
**********************************************/

#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
int getInput();
Funkcija getInput() -
atgriež skaitli, ja konsolē ievadītais skaitlis ir pāra un lielāks par 2
*/
int getInput() {
  // Gets user input and returns its `int` value
  int value;
  while (1) {
    cout << "Enter number: ";
    cin >> value;
    if (value > 2 && value % 2 == 0)
      return value;
    cout << "Please enter number that is even and greater than 2" << endl;
  }
}

/*
boot isPrime(int number);
Funkcija isPrime(number) -
atgriež `true`, ja skaitlis number ir pirmsskaitlis.
*/
bool isPrime(int number) {
  // Returns `true` if `number` is prime
  if (number % 2 == 0 && number > 2) // get rid of even numbers
    return false;
  // loop till square root of `number + 1` with `step 2`
  for (int i = 3; i < (static_cast<int>(sqrt(number)) + 1); i += 2) {
    if (number % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n_value, ask_continue = 1;
  do {
    n_value = getInput();
    // loop till half of `number + 1`
    for (int i = 2; i < n_value / 2 + 1; i++) {
      if (isPrime(i) && isPrime(n_value - i)) {
        cout << i << " + " << n_value - i << " = " << n_value << endl;
      }
    }

    cout << "Continue program? [1/0] ";
    cin >> ask_continue;
  } while (ask_continue == 1);
  return 0;
}
