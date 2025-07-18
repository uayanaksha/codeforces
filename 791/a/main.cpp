#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a, b, ctr{};
  cin >> a >> b;
  while(a <= b){
    a = 3*a;
    b = 2*b;
    ctr++;
  }
  cout << ctr << endl;
  return 0;
}
