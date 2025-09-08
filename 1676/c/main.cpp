#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int calculate_sum (string &s1, string &s2, int m);
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, mindiff = INT_MAX;
    cin >> n >> m;
    vector<string> mem(n);
    for(string &s: mem){
      cin >> s;
    }
    for(int i{}; i<n-1; ++i){
      for(int j{i+1}; j<n; ++j){
        int sum = calculate_sum(mem[i], mem[j], m);
        if(sum == 0){
          mindiff = 0;
          break;
        } else if(sum < mindiff){
          mindiff = sum;
        }
      }
    }
    cout << mindiff << endl;
  }
  return 0;
}

int calculate_sum (string &s1, string &s2, int m){
  int sum{};
  for(int i{}; i<m; ++i){
    sum += abs(s1[i] - s2[i]);
  }
  return sum;
}
