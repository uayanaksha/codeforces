#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a, b, product=1;
  cin >> a >> b;
  a = min(a,b);
  for(int i{1}; i<=a;++i){
    product*= i;
  }
  cout << product << endl;
  return 0;
}
