#ifndef _Blackjack_hh
#define _Blackjack_hh
#include <iostream>
#include <vector>
#include "Card.hh"
#include "Shoe.hh"

class Blackjack {
  
  public:
    
  Blackjack();

  virtual
  ~Blackjack();

  void
  printHand(std::vector<Card> hand);

  Shoe _shoe;
  std::vector<Card> dealer;
  std::vector<Card> player;
  
};

#endif //_Blackjack_hh
