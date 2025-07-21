#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n = 0, ai = 0, min = 0, max=0, ans;
  cin >> n;
  cin >> ai;
  vector<int> mem{ai};
  for(int i = 1; i < n; i++){
    cin >> ai;
    if(ai <= mem[min]){ min = i; }
    if(ai > mem[max]){ max = i; }
    mem.push_back(ai);
  }
  ans = n - 2 + max - min;
  if(max < min) { ++ans; }
  cout << ans << endl;
  return 0; 
}
