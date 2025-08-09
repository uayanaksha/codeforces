#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string n; 
    cin >> n;
    sort(n.begin(), n.end());
    cout << n[0] << endl;
  }
  return 0;
}
