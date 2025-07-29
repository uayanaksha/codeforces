#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c;
    bool firstWins = false;
    cin >> a >> b >> c;
    if(c%2){
      firstWins = true;
    }
    if(firstWins) a++;
    if(a>b){
      firstWins = true;
    } else {
      firstWins = false;
    }
    cout << (firstWins ? "First" : "Second") << endl;
  }
  return 0;
}
