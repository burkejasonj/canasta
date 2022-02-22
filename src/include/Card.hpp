#ifndef CARD_HPP
#define CARD_HPP

namespace Card {
enum Rank {
  ACE,
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
  JOKER
};
enum Suit { HEARTS, DIAMONDS, SPADES, CLUBS };
enum Back { BLUE, RED };

struct Card {
  Rank rank;
  Suit suit;
  Back back;
};
}; // namespace Card

#endif
