#include <algorithm>
#include "Shoe.hh"

Shoe::Shoe(int decks)
  :
  _cards()
{
  for (int d = 0; d < decks; d++)
  {
    for (int p = Card::TWO; p < Card::ACE; p++)
    {
      for (int s = Card::CLUBS; s < Card::SPADES; s++)
      {
        _cards.push_back(new Card((Card::Suit)s, (Card::Pips) p));
      }
    }
  }
  Shuffle();
}

Shoe::~Shoe()
{
}

void
Shoe::Shuffle()
{
  std::random_shuffle(_cards.begin(), _cards.end());
}
