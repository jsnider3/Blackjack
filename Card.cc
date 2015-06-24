#include "Card.hh"
#include <sstream>
Card::Card(Suit s, Pips p)
  :
  suit(s),
  pip(p)
{

}

Card::~Card()
{
}

std::ostream& operator<<(std::ostream &out, const Card &card)
{
  switch (card.pip) 
  {
    case Card::TWO:
      out << "2";
      break;
    case Card::THREE:
      out << "3";
      break;
    case Card::FOUR:
      out << "4";
      break;
    case Card::FIVE:
      out << "5";
      break;
    case Card::SIX:
      out << "6";
      break;
    case Card::SEVEN:
      out << "7";
      break;
    case Card::EIGHT:
      out << "8";
      break;
    case Card::NINE:
      out << "9";
      break;
    case Card::TEN:
      out << "10";
      break;
    case Card::JACK:
      out << "J";
      break;
    case Card::QUEEN:
      out << "Q";
      break;
    case Card::KING:
      out << "K";
      break;
    case Card::ACE:
      out << "A";
      break;
  }
  switch (card.suit) 
  {
    case Card::CLUBS:
      out << "C";
      break;
    case Card::DIAMONDS:
      out << "D";
      break;
    case Card::HEARTS:
      out << "H";
      break;
    case Card::SPADES:
      out << "S";
      break;
  }
  return out;//.str();
}
