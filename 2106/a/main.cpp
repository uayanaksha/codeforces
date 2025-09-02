#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, sum{};
    string s;
    cin >> n >> s;
    for(char c: s){
      if(c == '1'){
        sum += (n-1);
      } else {
        ++sum;
      }
    }
    cout << sum << endl;
  }
  return 0;
}
