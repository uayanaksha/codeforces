#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin >> s;
  for( int i{}; i < s.size(); i++){
    if(s.at(i) == '.'){
      cout << 0;
    } else {
      i++;
      if(s.at(i) == '.'){
        cout << 1;
      } else {
        cout << 2;
      }
    }
  } cout << endl;
  return 0;
}
