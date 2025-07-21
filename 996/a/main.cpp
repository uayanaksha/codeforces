#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, notes = 0;
  array<int, 5> bills{100, 20, 10, 5, 1};
  cin >> n;
  for (auto bill: bills) {
    if (n >= bill) {
      notes += n / bill;
      n = n % bill;
    }
  }
  cout << notes << endl;
  return 0;
}
