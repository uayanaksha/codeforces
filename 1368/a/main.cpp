#include <bits/stdc++.h>
using namespace std;
int helper(int maxim, int minim, int n){
  if(maxim > n || minim > n) return 0;
  return 1 + helper(maxim + minim, maxim, n);
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, n;
    cin >> a >> b >> n;
    int maxim = max(a, b);
    int minim = min(a, b);
    int moves = helper(maxim, minim, n);
    cout << moves << endl;
  }
  return 0;
}
