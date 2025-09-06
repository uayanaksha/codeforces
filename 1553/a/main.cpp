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
    int ctr = n/10;
    if(n%10 == 9){
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
