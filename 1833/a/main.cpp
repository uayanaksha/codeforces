#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    string s;
    vector<vector<bool>> mem(7, vector(7, false));
    cin >> n >> s;
    for(int i{1}; i<s.size(); ++i){
      if(mem[s[i]-'a'][s[i-1] - 'a']) continue;
      mem[s[i]-'a'][s[i-1]-'a'] = true;
      ctr++;
    }
    cout << ctr << endl;
  }
  return 0;
}
