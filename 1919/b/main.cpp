#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, p_ctr{}, m_ctr{};
    string s;
    cin >> n;
    while(n--){
      char c;
      cin >> c;
      if(c =='+'){
        ++p_ctr;
      } else {
        ++m_ctr;
      }
    }
    int tmp = min(p_ctr, m_ctr);
    p_ctr -= tmp;
    m_ctr -= tmp;
    cout << max(p_ctr, m_ctr) << endl;
  }
  return 0;
}
