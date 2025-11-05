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
    int sq = sqrt(n);
    if(sq*sq != n) sq++;
    cout << sq << endl;
  }
  return 0;
}
