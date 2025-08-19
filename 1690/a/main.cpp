#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, height;
    vector<int> mem({3,2,1});
    cin >> n;
    n -= 6;
    height = n/3;    
    n -= (height * 3);
    mem[0] += height;
    mem[1] += height;
    mem[2] += height;
    for(int i{}; i<n%3; i++){
      mem[i]++;
    }
    swap(mem[0], mem[1]);
    for(int e:mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
