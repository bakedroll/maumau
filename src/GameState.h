#pragma once

#include "Defs.h"

namespace mau
{
  class CardDeck;

  class GameState
  {
  public:
    GameState(CardDeck deck, int numPlayers, int numCardsPerPlayer);

  private:
    CardList              m_myHand;
    CardList              m_stack;
    std::vector<CardList> m_opponentsHands;
  };
}
