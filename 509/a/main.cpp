#include <bits/stdc++.h>
using namespace std;
int main(void){
  static const int mem[11] = { 0, 1, 2, 6, 20, 70, 252, 924, 3432, 12870, 48620 };
  int n;
  cin >> n;
  cout << mem[n] << endl;
  return 0;
}
