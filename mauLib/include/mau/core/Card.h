#pragma once

#include <vector>

namespace mau
{
  enum class Suit
  {
    Diamonds = 1,
    Hearts   = 2,
    Spades   = 3,
    Clubs    = 4
  };

  enum class Value : int
  {
    Two   = 2,
    Three = 3,
    Four  = 4,
    Five  = 5,
    Six   = 6,
    Seven = 7,
    Eight = 8,
    Nine  = 9,
    Ten   = 10,
    Jack  = 11,
    Queen = 12,
    King  = 13,
    Ace   = 14
  };

  struct Card
  {
    Suit  suit;
    Value value;
  };

  using CardList = std::vector<Card>;
}
