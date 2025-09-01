#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    map<string, int> m;
    vector<vector<string>> mem(3);
    cin >> n;
    for(int i{}; i<3; ++i){
      string s;
      for(int j{}; j<n; ++j){
        cin >> s;
        mem[i].push_back(s);
        if(!m.contains(s)){
          m.insert({s, 1});
        } else {
          m[s]++;
        }
      } 
    }
    for(auto a: mem){
      int ctr{};
      for(string word: a){
        switch (m[word]) {
          case 1: ctr += 3; break;
          case 2: ctr += 1; break;
        }
      }
      cout << ctr << " ";
    } cout << endl;
  }
  return 0;
}
