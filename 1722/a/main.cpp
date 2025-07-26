#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s, comp="Timur";
    cin >> n >> s;
    if(n!=comp.size()){
      cout << "NO" << endl;
      continue;
    }
    sort(s.begin(), s.end());
    sort(comp.begin(), comp.end());
    int res = s.compare(comp);
    if(res==0){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
