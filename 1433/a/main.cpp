#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, size=1, digit{}, ctr{};
    cin >> x;
    digit = x%10;
    while(x/=10){
      ++size;
    }
    ctr = ((digit-1)*10) + ((size+1)*size)/2;
    cout << ctr << endl;
  }
  return 0;
}
