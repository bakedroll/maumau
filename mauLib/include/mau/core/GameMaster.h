#pragma once

#include "mau/core/CardDeck.h"
#include "mau/core/GameState.h"
#include "mau/player/IPlayer.h"

namespace mau
{
  class GameMaster
  {
  public:
    GameMaster();
    virtual ~GameMaster();

    void addPlayer(IPlayer::Ptr player);
	  bool distributeCards(CardDeck::Ptr deck, int numCardsPerPlayer);

    int runGame();

  private:
    using PlayerList = std::vector<IPlayer::Ptr>;

    GameState::Ptr m_gameState;
    PlayerList m_players;
  };
}
