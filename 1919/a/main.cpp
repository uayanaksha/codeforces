#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    int sum = (a%10)+(b%10);
    cout << (sum %2 ? "Alice" : "Bob") << endl;
  }
  return 0;
}
