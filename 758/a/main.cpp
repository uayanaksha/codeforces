#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ai, sum{}, max{};
  cin >> n;
  for(int i{}; i < n; i++) {
    cin >> ai;
    if(ai > max) {
      max = ai;
    }
    sum += ai;    
  }
  sum = n * max - sum;
  cout << sum << endl;
  return 0;
}
