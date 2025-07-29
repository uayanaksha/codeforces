#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    bool isConsidered = true;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for(int i{}; i < n; i++){
      if(s1[i] == s2[i]) continue;
      if((s1[i] == 'G' && s2[i] == 'B') ||
          (s1[i] == 'B' && s2[i] == 'G')){
        continue;
      }
      isConsidered = false;
    }
    cout << ( isConsidered ? "YES" : "NO" ) << endl;
  }
  return 0;
}
