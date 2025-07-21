#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  string ans = "";
  cin >> n;
  for(int i = 0; i < n - 1; i++){
    ans += i%2 ? "I love that " : "I hate that " ;
  }
  ans += n%2 ? "I hate it" : "I love it";
  cout << ans << endl;
  return 0;
}
