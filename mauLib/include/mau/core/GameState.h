#pragma once

#include "mau/core/CardDeck.h"

#include <memory>

namespace mau
{
  class GameState
  {
  public:
    using Ptr = std::shared_ptr<GameState>;

    void setCardStack(CardDeck::Ptr stack);

  private:
    CardDeck::Ptr m_stack;
  };
}
