#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int time{};
    vector<int> kbdmem(26, 0);
    string s, kbd;
    cin >> kbd >> s;
    for(int i{1}; i<= 26; i++){
      kbdmem[kbd[i - 1] - 'a'] = i;
    }
    for(int i{1}; i< s.size(); i++){
      time += abs(kbdmem[s[i] - 'a'] - kbdmem[s[i-1] - 'a']);
    }
    cout << time << endl;
  }
  return 0;
}
