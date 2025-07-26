#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n%4==0){
      cout << "YES" << endl;
      vector<int> a;
      int size = n/2, i = 2, diff{};
      for(int x{}; x < size; x++){
        a.push_back(i);
        diff += i;
        i+=2;
      }
      size--;
      i=1;
      for(int x{}; x < size; x++){
        a.push_back(i);
        diff -= i;
        i+=2;
      }
      a.push_back(diff);
      for (auto e: a){
        cout << e << " ";
      } cout << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
