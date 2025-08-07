#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int k, n, ctr{};
    string s;
    cin >> k >> n >> s;
    for(int i{}; i<s.size(); i++){
      if(s[i] == 'B'){
        i += n-1 ;
        ctr++;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
