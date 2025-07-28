#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, max=INT_MIN, min=INT_MAX;
    cin >> n >> ai;
    max = ai;
    min = ai;
    while(--n){
      cin >> ai;
      if(ai>max){
        max = ai;
      }
      if(ai<min){
        min = ai;
      }
    }
    cout << max - min << endl;
  }
  return 0;
}
