/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0903.
Programma izveidota: 01.11.2022.
******************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int sequence(int n_minus_one, int n_minus_two) {
  return 4 * n_minus_one + 3 * n_minus_two;
}

int main() {
  int continueLoop = 1;

  do {
    int n_value;
    vector<int> v_numbers{2, 3};
    int last_num;
    cout << "Enter n-th element: " << endl;
    cin >> n_value;

    if (n_value == 1) {
      last_num = v_numbers[0];
    } else if (n_value == 2) {
      last_num = v_numbers[1];
    } else {
      for (int i = 2; i < n_value; i++) {
        v_numbers.push_back(sequence(v_numbers[i - 1], v_numbers[i - 2]));
      }
    }
    last_num = v_numbers[n_value - 1];
    cout << "n-th element is " << last_num << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
