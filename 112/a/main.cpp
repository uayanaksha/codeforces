#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(void){
  string s1, s2;
  cin >> s1;
  cin >> s2;
  transform(s1.begin(), s1.end(), s1.begin(),
      [](unsigned char c){ return tolower(c);});
  transform(s2.begin(), s2.end(), s2.begin(),
      [](unsigned char c){ return tolower(c);});

  int result = s1.compare(s2);
  if (result < 0) result = -1;
  if (result > 0) result = 1;
  cout 
    << result
    << endl;
  return 0;
}
