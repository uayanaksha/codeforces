#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s, t;
    int n;
    vector<int> mem;
    cin >> n >> t;
    while(!t.empty()){
      int digit;
      if(t.back() != '0'){
        digit = (t.back() - '0');
      } else {
        t.pop_back();
        digit = t.back() - '0';
        t.pop_back();
        digit += 10*(t.back() - '0');
      }
      t.pop_back();
      mem.push_back(digit);
    }
    while(!mem.empty()){
      cout << char('a' + mem.back() - 1);
      mem.pop_back();
    } cout << endl;
  }
  return 0;
}
