#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(void){
  string s;
  cin >> s;
  int lower{} , upper{};
  for (auto l : s) {
    if (islower(l)){
      ++lower;
    } else {
      ++upper;
    }
  }
  if(upper > lower){
    transform(s.begin(), s.end(), s.begin(), 
        [](unsigned char c){ return toupper(c);});
  } else {
    transform(s.begin(), s.end(), s.begin(), 
        [](unsigned char c){ return tolower(c);});
  }
  cout << s << endl;
}
