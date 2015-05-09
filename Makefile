all: Blackjack
	@true

Blackjack: Blackjack.cc Blackjack.hh Card.cc Card.hh Shoe.cc Shoe.hh
	g++ -std=c++11 -o Blackjack -g Blackjack.cc Card.cc Shoe.cc

run: all
	./Blackjack
