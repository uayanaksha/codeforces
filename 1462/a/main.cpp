#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    vector<int> a;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      a.push_back(ai);
    }
    int start = 0, end = n-1;
    while(start <= end){
      cout << a.at(start) << " ";
      if(start++ < end){
        cout << a.at(end--) << " ";
      }
    } cout << endl;
  }
  return 0;
}
