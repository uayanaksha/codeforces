#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    vector<int> mem(256, 0);
    cin >> n;
    for(int i{}; i<n; ++i){
      cin >> s;
      for(char c: s){
        mem[c]++;
      }
    }
    int signal = true;
    for(int i='a'; i<='z'; ++i){
      if(mem[i] % n != 0){
        signal = false;
        break;
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
