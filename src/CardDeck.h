#pragma once

#include "Defs.h"

namespace mau
{
  class CardDeck
  {
  public:
    void shuffle();
    void addCard(const Card& card);

    bool isEmpty() const;
    Card takeCard();

  private:
    CardList m_cards;
  };
}
