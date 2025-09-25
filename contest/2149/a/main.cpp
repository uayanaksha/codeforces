#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, tmp, sum = 0, _ctr=0;
    cin >> n;
    while(n--){
      cin >> tmp;
      if(tmp == 0){
        sum++;
        continue;
      }
      if(tmp == -1){
        _ctr++;
      }
    }
    sum += (_ctr%2)*2;
    cout << sum << endl;
  }
  return 0;
}
