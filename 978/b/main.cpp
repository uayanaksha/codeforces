#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ctr{}, rm{};
  string s;
  cin >> n >> s;
  for(int i{}; i<n; i++){
    if(s[i] == 'x'){
      if(ctr > 1){
        rm++;
      } else {
        ctr++;
      }
    } else {
      ctr = 0;
    }
  }
  cout << rm << endl;
  return 0;
}
