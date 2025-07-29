#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    unsigned n, max='a';
    char c;
    cin >> n;
    while(n--){
      cin >> c;
      if(c > max){
        max = c;
      }
    }
    cout << max - 'a' + 1 << endl;
  }
  return 0;
}
