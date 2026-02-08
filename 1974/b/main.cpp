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
    cin >> n >> s;
    vector<int> mem(256, 0);
    for(const char& c: s){
      mem[c] = c;
    }
    int l=(int)'a', r=(int)'z';
    while(l<r){
      while(!mem[l] && l<r) ++l;
      while(!mem[r] && l<r) --r;
      mem[l] = r;
      mem[r] = l;
      l++, r--;
    }
    for(char& c: s){
      c = mem[c];
    }
    cout<< s << endl;
  }
  return 0;
}
 
