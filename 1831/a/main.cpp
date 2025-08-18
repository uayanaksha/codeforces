#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      cout << n-ai+1 << " ";
    } cout << endl;
  }
  return 0;
}
