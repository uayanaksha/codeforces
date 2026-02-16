#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int fn(const string& s){
  int n = s.size();
  int days{};
  for(int i{}; i<n;){
    int ctr{};
    vector<int> v(26, 0);
    while(i<n){
      if(!v[s[i] - 'a']){
        if(ctr == 3) break;
        v[s[i] - 'a'] = 1;
        ++ctr;
      }
      ++i;
    }
    ++days;
  }
  return days;
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<string> mem(n);
  for(string &i: mem){
    cin >> i;
  }
  for(string &i: mem){
    cout << fn(i) << endl;
  }
  return 0;
}
