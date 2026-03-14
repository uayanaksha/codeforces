#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n, m;
  cin >> n >> m;
  vector<vector<char>> v(n , vector<char>(m));
  for(auto& r: v){
    for(char& c: r)
      cin >> c;
  }
  const string vika = "vika";
  bool found = false;
  int k = 0;
  for(int j{}; j<m && k < vika.size(); ++j){
    for(int i{}; i<n && !found; ++i){
      if(v[i][j] == vika[k]){
        k++;
        break;
      }
    }
    found = k == vika.size();
  }
  cout << (found ? "YES" : "NO") << '\n';
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
