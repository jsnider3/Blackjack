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

  Shoe _shoe;
  
};

#endif //_Blackjack_hh
