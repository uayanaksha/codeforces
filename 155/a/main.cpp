#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ni, max, min, ctr{};
  cin >> n >> ni;
  max = ni, min = ni;
  while(n--){
    cin >> ni;
    if(ni < min){
      min = ni; 
      ++ctr;
    }
    if(ni > max){
      max = ni; 
      ++ctr;
    }
  }
  cout << ctr << endl;
  return 0;
}
