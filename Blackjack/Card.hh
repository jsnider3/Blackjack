#ifndef _Card_hh
#define _Card_hh

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

  Suit _suit;
  Pips _pip;

};

#endif //_Card_hh
