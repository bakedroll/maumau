#pragma once

#include "mau/core/Card.h"

#include <memory>

namespace mau
{
  class IPlayer
  {
  public:
    using Ptr = std::shared_ptr<IPlayer>;

    Ptr getNextPlayer() const;
    void setNextPlayer(const Ptr& player);

    void giveCard(const Card& card);

  private:
    Ptr m_nextPlayer;

    CardList m_cards;
  };
}
