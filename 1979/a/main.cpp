#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, curr, prev, min_max = INT_MAX;
    cin >> n >> prev;
    while(--n){
      cin >> curr;
      int selected_max = max(curr, prev);
      if(selected_max < min_max){
        min_max = selected_max;
      }
      prev = curr;
    }
    --min_max;
    cout << min_max << endl;
  }
  return 0;
}
