#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b, c;
  cin>>t;
  while(t--){
    cin >> a >> b >> c;
    if(a+b>=10 || b+c>=10 || a+c>=10){
      println("YES");
    } else {
      println("NO");
    }
  }
  return 0;
}
