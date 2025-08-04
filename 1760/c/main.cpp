#include <bits/stdc++.h>
#include <functional>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, max1=INT_MIN, max2=INT_MIN;
    vector<int> mem, sorted;
    cin >> n;
    for(int i=1; i<=n; i++){
      cin >> ai;
      mem.push_back(ai);
      sorted.push_back(ai);
    }
    sort(sorted.begin(), sorted.end(), greater<int>());
    max1 = sorted[0];
    max2 = sorted[1];
    for(int e: mem){
      if(e == max1){
        cout << max1 - max2 << " ";
      } else {
        cout << e - max1 << " ";
      }
    } cout << endl;
  }
  return 0;
}
