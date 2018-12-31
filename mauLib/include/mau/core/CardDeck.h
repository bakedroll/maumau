#pragma once

#include "mau/core/Card.h"

#include <memory>

namespace mau
{
  class CardDeck
  {
  public:
    using Ptr = std::shared_ptr<CardDeck>;

    void shuffle();
    void addCard(const Card& card);

    bool isEmpty() const;
    Card takeCard();

  private:
    CardList m_cards;
  };
}
