#include "mau/core/Dealer.h"

namespace mau
{
  CardDeck::Ptr makeCardDeck(Value fromValue, Value toValue)
  {
    auto deck = std::make_shared<CardDeck>();

    for (auto suit = static_cast<int>(Suit::Diamonds); suit<=static_cast<int>(Suit::Clubs); suit++)
    {
      for (auto value = static_cast<int>(fromValue); value<=static_cast<int>(toValue); value++)
      {
        deck->addCard({ static_cast<Suit>(suit), static_cast<Value>(value) });
      }
    }

    return deck;
  }
}
