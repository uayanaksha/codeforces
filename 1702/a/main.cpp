#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, exp = 1;
    string s;
    cin >> s;
    n = stoi(s);
    for(int i{1}; i<s.size(); i++){
      exp *= 10;
    }
    cout << n - exp << endl;
  }
  return 0;
}
