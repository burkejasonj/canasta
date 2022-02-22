#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <vector>

namespace Deck {
class Deck {
  std::vector<Card::Card> contents;
  int totalCards;

  // Return Position, -1 if fail
  int addCard(Card::Card card);

  // Return removed card, card is fake joker if fail
  bool removeCard(int index);

  // Return removed cards, vector with fake joker only if fail
  std::vector<Card::Card> removeAllCards();
};
}; // namespace Deck

#endif
