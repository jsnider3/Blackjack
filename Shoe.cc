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
        _cards.push_back(Card((Card::Suit)s, (Card::Pips) p));
      }
    }
  }
  shuffle();
}

Shoe::~Shoe()
{
}

Card
Shoe::deal()
{
  Card dealt = _cards.back();
  _cards.pop_back();
  return dealt;
}

void
Shoe::shuffle()
{
  std::random_shuffle(_cards.begin(), _cards.end());
}


int
Shoe::size()
{
  return _cards.size();
}
