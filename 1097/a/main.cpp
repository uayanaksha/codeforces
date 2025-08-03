#include <bits/stdc++.h>
using namespace std;
int main(void){
  bool playable = false;
  char table_card_rank, table_card_suit;
  char inhand_card_rank, inhand_card_suit;
  cin >> table_card_rank >> table_card_suit;
  for(int i{}; i<5; i++){
    cin >> inhand_card_rank >> inhand_card_suit;
    if(inhand_card_rank == table_card_rank || inhand_card_suit == table_card_suit){
      playable = true;
    }
  }
  cout << ( playable ? "YES" : "NO" ) << endl;
  return 0;
}
