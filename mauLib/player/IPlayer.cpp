#include "mau/player/IPlayer.h"

namespace mau
{
  IPlayer::Ptr IPlayer::getNextPlayer() const
  {
    return m_nextPlayer;
  }

  void IPlayer::setNextPlayer(const Ptr& player)
  {
    m_nextPlayer = player;
  }

  void IPlayer::giveCard(const Card& card)
  {
    m_cards.push_back(card);
  }
}
