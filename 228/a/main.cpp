#include <bits/stdc++.h>
using namespace std;
int main(void){
  set<unsigned long long> s;
  unsigned long long s1, s2, s3, s4;
  unsigned ctr = 0;
  cin >> s1 >> s2 >> s3 >> s4;
  s.emplace(s1);
  s.emplace(s2);
  s.emplace(s3);
  s.emplace(s4);
  cout << 4 - s.size() << endl;
  return 0;
}
