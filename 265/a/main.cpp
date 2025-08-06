#include <bits/stdc++.h>
using namespace std;
int main(void){
  int ptr{};
  string s, t;
  cin >> s >> t;
  for(auto e: t){
    if(s[ptr]==e){
      ptr++;
    }
  }
  cout << ptr + 1 << endl;
  return 0;
}
