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
    cin >> n;
    for(int i{n-1}; i > 0; --i){
      cout << i << " ";
    } 
    cout << n << " ";
    for(int i{1}; i<= n; ++i){
      cout << i << " ";
    } cout << endl;
  }
  return 0;
}
