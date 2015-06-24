#ifndef _Shoe_hh
#define _Shoe_hh
#include <vector>
#include "Card.hh"

class Shoe {
  
  public:

  /*
  * Constructor
  */
  Shoe(int decks);

  /*
  * Destructor
  */
  virtual
  ~Shoe();

  Card
  deal();

  void
  shuffle();

  int
  size();
  
  private:

  std::vector<Card> _cards;

};

#endif //_Shoe_hh
