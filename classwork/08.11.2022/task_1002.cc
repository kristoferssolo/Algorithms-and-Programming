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

void removeNums(vector<int> *v, vector<int> *v2, int limit) {
  for (int i = 0; i < v->size(); i++) {
    if (v[i] > limit) {
      v2->push_back(v[i]);
    }
  }
}

int main() {
  int continueLoop = 1;
  do {
    vector<int> v, v2;
    int num, limit = 17;
    for (int i = 0; num != 0; i++) {
      cin >> num;
      v.push_back(num);
    }
    removeNums(v, v2, limit);

    cout << "Continue? [1/0] ";
    cin >> continueLoop;
    cout << endl;
  } while (continueLoop == 1);
  return 0;
}
