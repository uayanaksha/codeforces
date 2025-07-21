#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void){
  string s;
  set<char> set;
  while(getline(cin, s, ' ')){
    for(auto e: s){
      if(isalpha(e)){
        set.insert(e);
      }
    }
  }
  cout << set.size() << endl;
  return 0;
}
