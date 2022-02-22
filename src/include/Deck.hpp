#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <vector>

namespace Deck {
class Deck {
  std::vector<Card::Card> contents;
  int totalCards;

  int addCard();     // Return Position, -1 if fail
  bool removeCard(); // Return removed card, card is fake joker if fail
  std::vector<Card::Card> removeAllCards(); // Return removed cards, vector with
                                            // fake joker only if fail
};
}; // namespace Deck

#endif
