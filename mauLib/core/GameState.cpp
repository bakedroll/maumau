#include "mau/core/GameState.h"

namespace mau
{
  void GameState::setCardStack(CardDeck::Ptr stack)
  {
    m_stack = stack;
  }
}
