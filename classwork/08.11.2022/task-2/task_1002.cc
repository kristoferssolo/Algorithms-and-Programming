/******************************************************************
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa1002.
Programma izveidota: 07.11.2022.
******************************************************************/
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*
vector<int> removeNums(const vector<int> &v, vector<int> &v2, int limit);
Funkcija removeNums(v, v2, limit) -
izveido vektoru v2 un aizpilda ar vektora v elementiem, kuri ir lielāki par
limit (17)
*/
vector<int> removeNums(const vector<int> &v, int limit) {
  vector<int> v2;
  for (auto &number : v) {
    if (number > limit) {
      v2.push_back(number);
    }
  }
  return v2;
}

int main() {
  int continueLoop = 1;
  do {
    vector<int> v;
    int num, limit = 17;
    cout << "Enter numbers (0 to break): " << endl;
    for (int i = 0; num != 0; i++) {
      cin >> num;
      v.push_back(num);
    }
    for (auto &number : removeNums(v, limit)) {
      cout << number << " ";
    }
    v.clear();
    cout << endl;

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
