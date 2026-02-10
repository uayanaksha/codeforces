#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a, b, ctr{};
    cin >> a >> b;
    if(a>b) swap(a, b);
    int diff = (b-a);
    int team_3_1 = diff/2;
    int minim = min(team_3_1, a);
    ctr = minim + (a-minim)/2;
    cout << ctr << endl;
  }
  return 0;
}
