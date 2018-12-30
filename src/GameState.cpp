#include "GameState.h"

#include "CardDeck.h"
#include <cassert>

namespace mau
{
  GameState::GameState(CardDeck deck, int numPlayers, int numCardsPerPlayer)
  {
    if (numPlayers < 2)
    {
      assert(false);
      return;
    }

    auto currentPlayer = 0;
    m_opponentsHands.resize(numPlayers - 1);

    while (!deck.isEmpty())
    {
      auto card = deck.takeCard();

      if ((currentPlayer == 0) && (m_myHand.size() < numCardsPerPlayer))
      {
        m_myHand.push_back(card);
      }
      else if ((currentPlayer > 0) && (m_opponentsHands[currentPlayer - 1].size() < numCardsPerPlayer))
      {
        m_opponentsHands[currentPlayer - 1].push_back(card);
      }
      else
      {
        m_stack.push_back(card);
      }

      currentPlayer = (currentPlayer + 1) % numPlayers;
    }
  }
}
