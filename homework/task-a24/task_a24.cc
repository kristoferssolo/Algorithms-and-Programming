/*******************************************
Copyright
Autors - Kristiāns Francis Cagulis, kc22015
A24. Nosaka skaitļa m pēdējo n ciparu summu.
Programma izveidota: 18.09.2022.
*******************************************/

#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int getInput(string text) {
  // Gets user input and returns its integer value
  int value;
  while (1) {
    cout << "Enter number " << text << ": ";
    cin >> value;
    if (value > 0)
      return value;
    cout << "Please enter a natural number" << endl;
  }
}

int getLength(int number) {
  // Returns length of an integer
  return (number == 0) ? 1 : floor(log10(number) + 1);
}

int sumDigits(int m_value, int n_value) {
  // Sums last n numbers of m
  int sum = 0;
  for (int i = 0; i < n_value; i++) {
    sum += (m_value / static_cast<int>(pow(10, i))) % 10;
  }
  return sum;
}

int main() {
  int m_value, n_value, length, ask_continue = 1;
  do {
    m_value = getInput("m");
    length = getLength(m_value);

    do {
      n_value = getInput("n");
      if (n_value < length)
        break;
      cout << "n value is too big. It must be lower than length of m value ("
           << length << ")." << endl;
    } while (1);

    cout << "The sum of the last " << n_value << " digit(s) of the number "
         << m_value << " is " << sumDigits(m_value, n_value) << endl
         << endl;

    cout << "Continue program? [1/0] ";
    cin >> ask_continue;
  } while (ask_continue == 1);
  return 0;
}
