#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    vector<int> mem(256, 0);
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for(int i{}; i<n; ++i){
      mem[s1[i]]++;
      mem[s2[i]]--;
    }
    bool signal = true;
    for(int i='a'; i<='z'; ++i){
      if(mem[i] != 0){
        signal = false;
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
