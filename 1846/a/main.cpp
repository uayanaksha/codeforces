#include <iostream>
int main(void){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int t;
  std::cin >> t;
  while(t--){
    int n, ai, bi, ctr{};
    std::cin >> n;
    while(n--){
      std::cin >> ai >> bi;
      if(ai > bi){
        ++ctr;
      }
    }
    std::cout << ctr << std::endl;
  }
  return 0;
}
