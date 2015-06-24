#include "Blackjack.hh"
#include "Shoe.hh"

Blackjack::Blackjack()
  :
  _shoe(6) 
{
  std::cout << "Playing blackjack" << std::endl;
  while (_shoe.size() >= 4) {
    dealer.clear();
    player.clear();
    dealer.push_back(_shoe.deal());
    dealer.push_back(_shoe.deal());
    player.push_back(_shoe.deal());
    player.push_back(_shoe.deal());

    std::cout << dealer[0] << std::endl;
    printHand(player);
  }
}

Blackjack::~Blackjack()
{
}

void
Blackjack::printHand(std::vector<Card> hand)
{
  for (const auto &card : hand)
    std::cout << card << ' ';
}

int main()
{
  Blackjack game = Blackjack();
}
