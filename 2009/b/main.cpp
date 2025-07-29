#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    char c;
    deque<int> mem;
    cin >> n;
    for(int i{1}; i<=n; i++){
      for(int j{1}; j<=4; j++){
        cin >> c;
        if(c == '#'){
          mem.push_front(j);
        }
      }
    }
    for(auto e: mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
