#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, k, yi;
  vector<int> y;
  cin >> n >> k;
  for(int i{}; i < n; i++){
    cin >> yi;
    if(yi <= 5-k){
      y.push_back(yi);
    }
  }
  println("{}", y.size()/3);
  return 0;
}
