#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, min{0}, sop{1};
    cin >> n;
    vector<int> mem;
    for(int i{}; i < n; i++){
      cin >> ai;
      mem.push_back(ai);
      if(ai < mem[min]){
        min = i;
      }
    }
    mem[min]++;
    for(int i{}; i < n; i++){
      sop *= mem[i];
    }
    cout << sop << endl;
  }
  return 0;
}
