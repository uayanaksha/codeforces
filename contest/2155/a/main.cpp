#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int matches(int x){
  int carry{};
  int n{};
  while(x+carry>1){
    x += carry;
    n += x/2;
    carry = x%2;
    x /= 2;
  }
  return n + carry;
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int match_count = matches(n) + matches(n-1) + 1;
    cout << match_count << endl;
  }
  return 0;
}
