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
    if(n == 2){
      cout << 2 << " " << 1 << endl;
      continue;
    }

    if(n == 3){
      cout << 3 << " " << 1 << " " << 2 << endl;
      continue;
    }

    if(n%2 == 0){
      for(int i=1; i<n; i += 2){
        cout << i+1 << " " << i << " ";
      } cout << endl;
      continue;
    } 

    cout << 3 << " " << 1 << " " << 2 << " ";
    for(int i=4; i<n; i += 2){
      cout << i+1 << " " << i << " ";
    } cout << endl;
  }
  return 0;
}
