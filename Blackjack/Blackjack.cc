#include "Blackjack.hh"
#include "Shoe.hh"

Blackjack::Blackjack()
  :
  _shoe(6) 
{
  std::cout << "Playing blackjack" << std::endl;
}

Blackjack::~Blackjack()
{
}

int main()
{
  Blackjack *game = new Blackjack();
}
