#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    char c;
    cin >> n >> k;
    vector<vector<char>> mem;
    for(int i{}; i<n; i++){
      vector<char> imem;
      for(int j{}; j<n; j++){
        cin >> c;
        imem.push_back(c);
      } mem.push_back(imem);
    }

    for(int i{}; i<n; i+=k){
      for(int j{}; j<n; j+=k){
        cout << mem[i][j];
      } cout << endl;
    }
  }
  return 0;
}
