#ifndef _Card_hh
#define _Card_hh
#include <iostream>

class Card {

  public:

  enum Suit {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
  };
  
  enum Pips {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
  };
  
  /*
  * Constructor
  */
  Card(Suit s, Pips p);

  /*
  * Destructor
  */
  virtual
  ~Card();
  
  //std::ostream& operator<< (std::ostream& o, const Card& card);
  //operator std::string();

  Suit suit;
  Pips pip;

//  std::ostream& operator<<(std::ostream& stream);
  friend std::ostream& operator<<(std::ostream& os, const Card &card);

};


#endif //_Card_hh
