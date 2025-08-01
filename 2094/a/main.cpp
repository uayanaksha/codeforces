#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    while(getline(cin, s)){
      string mem{};
      char prev = ' ';
      for(auto curr: s){
        if(prev == ' '){
          mem += curr;
        }
        prev = curr;
      }
      cout << mem << endl;
    } 
  }
  return 0;
}
