#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, start{-1}, end{-1};
    char c;
    cin >> n;
    for(int i{1}; i<=n ;i++){
      cin >> c;
      if(c == 'W') continue;
      if(start < 0){ start = i; end = i; }
      end = i;
    }
    cout << end - start + 1 << endl;
  }
  return 0;
}
