#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string a, b;
    cin >> b;
    a = b[0];
    for(int i=1; i < b.size(); i++){
      a+= b[i];
      if(i+1 == b.size()) break;
      if(b[i] == b[i+1]){
        ++i;
      }
    }
    cout << a << endl;
  }
  return 0;
}
